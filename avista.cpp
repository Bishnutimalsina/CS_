/*
//  .______    __       _______. __    __  .__   __.  __    __     .___________. __  .___  ___.      ___       __           _______. __  .__   __.      ___      
//  |   _  \  |  |     /       ||  |  |  | |  \ |  | |  |  |  |    |           ||  | |   \/   |     /   \     |  |         /       ||  | |  \ |  |     /   \     
//  |  |_)  | |  |    |   (----`|  |__|  | |   \|  | |  |  |  |    `---|  |----`|  | |  \  /  |    /  ^  \    |  |        |   (----`|  | |   \|  |    /  ^  \    
//  |   _  <  |  |     \   \    |   __   | |  . `  | |  |  |  |        |  |     |  | |  |\/|  |   /  /_\  \   |  |         \   \    |  | |  . `  |   /  /_\  \   
//  |  |_)  | |  | .----)   |   |  |  |  | |  |\   | |  `--'  |        |  |     |  | |  |  |  |  /  _____  \  |  `----..----)   |   |  | |  |\   |  /  _____  \  
//  |______/  |__| |_______/    |__|  |__| |__| \__|  \______/         |__|     |__| |__|  |__| /__/     \__\ |_______||_______/    |__| |__| \__| /__/     \__\ 
//                                                                                                                                                               


  https://bishnutimalsina1.github.io/portfolio/
  tima9387@vandals.uidaho.edu
  >> Bishnu Timalsina
  >> CS120 SECTION 06
  >> 03/19/2018                                                                                                                             
*/

/* Program run was successful when tested on Visual studio code 1.20(x64) with g++ compiler(shell 1.7.9) as expected in the documentation. */
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib> // for exit
using namespace std;
int function(int zombie){
  
   int x = 0;
   int y = 0;
   int z = 0;
   int sum = 0;
   int p = 0;
   int q = 0;
   
   int counter = -1;
   int first = zombie;
   for(int v = 0; v < 15; v++){
   
     
     x = zombie % 10;
     p = zombie / 10;//p = 19
     y = p % 10; // y = 9
     q = p / 10;
     z = q % 10;
     
     sum = x*x + y*y + z*z  ;
   if (sum == 1){
       cout <<"    "<< first<<" is zombie of order  "<<v<<endl;
       break;

   }
   else{
    zombie = sum;
    
   }
    
    }
    
   
    return 0;
    

}
int main()
{
    int input = 0;
    int x;
    int ubound;
    int lbound;
    char command;
    cout<< "Enter command:";
    cin >>command;
 if ((command == 'z')||(command == 'Z')){
cout << "Enter search range:";
cin >> lbound;
cin >> ubound;
if (lbound >= ubound){
    cout<<"Invalid search range specified";
    main();
}
else{
cout << "Searching range ["<<lbound<<","<<ubound<<"]"<<"........." << endl;
 for (int c = lbound; c < ubound; c++){
 input = c;
 
 x = function(input);
 }
 }
 }
 else if((command == 'x') ||(command == 'X')){
     exit(0);
 }
else{
    cout<<"Unrecognized command"<<endl;
    main();
} 
 
cout << "Enter command:";
    cin >> command;
 
    return 0;
	
    
}
