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
  >> 1/30/2018                                                                                                                             
*/
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;




int main(int foo)
{
double a, b;             // declare input variables
double c;

cout << "Please enter a first diameter: " << flush;
cin >> a;
cout << "Please enter second diameter:" << flush;
cin >> b;
c = (2 * M_PI) * sqrt((a*a + b*b)/2);          // Calculate the circumference
cout << "circumference is " << c << "." << endl;




return 0;
}

int foo()
{
   if (a <= 0)
		cout << "Error: input is less than 0 or greater than 25" << endl;
        
 
}
return 0;
