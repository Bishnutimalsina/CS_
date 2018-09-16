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
  >> 02/01/2018                                                                                                                             
*/
#include <iostream>

using namespace std;


int foo(int gen_num)
{
	int nX1 = 1;	// the second previous number in the sequence
	int nX2 = 1;	// the previous number in the sequence
	int nX3 = 0;	// the current number in the sequence
	
	
	if (gen_num == 0)
		return 1;
    if (gen_num == 1)
		return 1;
	if (gen_num == 2)
		return 2;

	for (int i = 0; i <= gen_num-2; i++)
	{
		nX3 = nX1 + nX2;
		nX1 = nX2;
		nX2 = nX3;
	}

	return nX3;
}

int main ()
{
	
	int gen_num = 1;	//value the user will enter
	int ans;     //value do be displayed
	char filter;

	cout << ")8( The Hundred-Acre Apiary Analysis Tool )8(\n";
	cout << "Enter a command:";
	cin >> filter;
	if (filter == c)
	{
		while ( !( (gen_num < 0) || (gen_num > 25) ) )
		{
		
		cout << "Enter ancestral generation number:";
		cin >> gen_num;
    			if (gen_num < 0 || gen_num > 25)
				{
				cout << "Error: input is less than 0 or greater than 25" << endl;
        		return -1;
				}
		ans =  foo(gen_num);
		cout << ans << endl;
		}
	else if(filter == s)
	{
		for (i=2; i<=gen_num; i++)
		{
		nX3 = nX1 + nX2;
		sum = sum + nx3;
		nX1 = nX2;
		nX2 = nX3;
		}

	}
	 else 
	 {
		 cout << "thank you" << endl;
	 }

	return 0;
}