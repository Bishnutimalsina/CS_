/*
__________  .__           .__                           ___________ .__                     .__             .__                   
\______   \ |__|   ______ |  |__     ____    __ __      \__    ___/ |__|   _____   _____    |  |     ______ |__|   ____   _____   
 |    |  _/ |  |  /  ___/ |  |  \   /    \  |  |  \       |    |    |  |  /     \  \__  \   |  |    /  ___/ |  |  /    \  \__  \  
 |    |   \ |  |  \___ \  |   Y  \ |   |  \ |  |  /       |    |    |  | |  Y Y  \  / __ \_ |  |__  \___ \  |  | |   |  \  / __ \_
 |______  / |__| /____  > |___|  / |___|  / |____/        |____|    |__| |__|_|  / (____  / |____/ /____  > |__| |___|  / (____  /
        \/            \/       \/       \/                                     \/       \/              \/            \/       \/ 

  https://bishnutimalsina1.github.io/portfolio/
  >> Bishnu Timalsina
  >> CS120 SECTION 06
  >> 02/19/2018                                                                                                                             
*/

/*The whole program is built on the if else statement template with function summ for adding the sequence 
 and function foo for displaying the count of the generation. Input character validation is done at the 
 start of if else statement. Error handling is added according to the documentation.*/
 
 /* I have tried my best to comment the code for the convenience of the reader because I respectfully 
 value the time of the reader. I have also tried my best to write the clean code.(To write the simplest it could be
 and complex it was required to be) */
 
/* Program run was successful when tested on Visual studio code 1.20(x64) with g++ compiler(shell 1.7.9) as expected in the documentation. */

#include <iostream>
#include <stdlib.h> // This library is used for exit function.
using namespace std;

int foo(int); //function foo prototype declaration. It generates count of bees.
int summ( ); // functionn summ prototype declaration. It generates summ of generation number from 1 .. (input)
int main () 
{
	
	int gen_num = 1;	//value the user will enter
	int ans;     //value do be displayed
	int n;
    int z;
	char filter;

cout << ")8( The Hundred-Acre Apiary Analysis Tool )8(" << endl; 
cout << "Enter a command:" ;
cin >> filter ;
if (filter == 'c' ) // character input validation 
{ 
   
		cout << "Enter ancestral generation number:";
		cin >> gen_num;
    			if (gen_num < 0 || gen_num > 25) // error handling
				{
				cout << "Error: input is less than 0 or greater than 25" << endl;
        		return -1;
				}
		ans =  foo(gen_num); // function call.
		cout << "Ancestral generation" <<" "<< gen_num <<" "<<"contains"<<" "<< ans <<" "<< "honeybees"<< endl;
		
}
    else if (filter == 's')
    {
    	z = summ(); // function call.
    }
	else 
	{
		cout << "Invalid command"<< endl;
		return -1;
	}
	return main(); //main is called. recursion? This is the only way i could think of repeating the program without exit.
}


int foo(int gen_num) // FUNCTION THAT GENERATES THE COUNT OF GENERATION NUMBER
{
	int nX1 = 1;	// the second previous number in the sequence
	int nX2 = 1;	// the previous number in the sequence
	int nX3 = 0;	// the current number in the sequence
	
	
	if (gen_num == 0) // initial values
		return 1;
    if (gen_num == 1)
		return 1;
	if (gen_num == 2)
		return 2;

	
	for (int i = 0; i <= gen_num-2; i++) // generation number is counted here.
	{
		nX3 = nX1 + nX2;
		nX1 = nX2;
		nX2 = nX3;
	}
	return nX3;
}

int summ() // function that calculates sum (independent of another function) 
{
     int i;
     int n;
    cout << "Enter ancestral generation number:";
	cin >> n;
	
	if (n < 0 || n > 25) // input validation.
				{
				cout << "Error: input is less than 0 or greater than 25" << endl;
        		exit(0); // exit function used for error handling.
				}
  int first = 1, second = 1, sum = 1, third=0;
   for(i = 1; i <= n-1; i++){
          third = first + second;
 	      sum = sum + third;
      	  first = second;
 	      second = third;
    }
    cout <<"Generation 1..."<<n<<" "<<"contains"<<" "<< sum<<" "<< "honeybees"<< endl;
	return 0; 
  	 
}