/*
__________  .__           .__                           ___________ .__                     .__             .__                   
\______   \ |__|   ______ |  |__     ____    __ __      \__    ___/ |__|   _____   _____    |  |     ______ |__|   ____   _____   
 |    |  _/ |  |  /  ___/ |  |  \   /    \  |  |  \       |    |    |  |  /     \  \__  \   |  |    /  ___/ |  |  /    \  \__  \  
 |    |   \ |  |  \___ \  |   Y  \ |   |  \ |  |  /       |    |    |  | |  Y Y  \  / __ \_ |  |__  \___ \  |  | |   |  \  / __ \_
 |______  / |__| /____  > |___|  / |___|  / |____/        |____|    |__| |__|_|  / (____  / |____/ /____  > |__| |___|  / (____  /
        \/            \/       \/       \/                                     \/       \/              \/            \/       \/ 

  https://bishnutimalsina1.github.io/portfolio/
  tima9387@vandals.uidaho.edu
  >> Bishnu Timalsina
  >> CS120 SECTION 06
  >> 02/22/2018                                                                                                                             
*/
#include <iostream>
#include <stdlib.h> // This library is used for exit function.
#include <fstream>
using namespace std;

int small();
int res();
int large();
int ind();


int main(){
    int id;
    int sch;
    char file;
    int z;
    int x;
    double energy;
    char ans;
    cout <<"AVISTA"<< endl;
    cout << "Enter filename:"<<endl;
    cin >> file;
    ifstream inFile;
    
    inFile.open( "saved.txt");
    if (!inFile) {
        cout << "Unable to open file. Try again.";
        cin >> file; // terminate with error
    }
    
    while (inFile >> x) {
        cin >> id >> sch >> energy >> ans ;
    }
    
    inFile.close();
    
    if (sch == 1){
        z = res();
        }
        else if(sch == 11) {
            z = small();
        }
        else if (sch == 12){
            z = large();
        }
        else if (sch == 21) {
            z = ind();
        }
        else {
            cout << "Invalid character. Please input again" << endl;
            cin >> sch;
        }
    return 0;
}

int res(){
    
    double drate;
    double rate = 0.07971;
    double basic = 4;
    double energy;
    cout << "Residential" << endl;
    cout << "Enter energy"<< endl;
    cin >> energy;
    if (energy <= 600){
        drate = 0.05255;
    }
    else {
        drate = 0.06156;
    }
double charge = (rate * energy) + (drate * energy);
cout << charge<< endl;
return charge;
}

int small(){
    //double charge;
    double drate;
    double rate = 0.07971;
    double basic = 6;
    double energy;
    cout << "Small commercial" << endl;
    cout << "Enter energy"<<endl;
    cin >> energy;
    if (energy <= 20){
        drate = 0;
    }
    else {
        drate = 3.5;
    }
double charge = (rate * energy) + (drate * energy);
cout << charge<< endl;
return charge;
}

int large(){
    //double charge;
    double drate;
    double rate = 0.07971;
    double basic = 6;
    double vdis = 0.2;
    double energy;
    double charge;
    char ans;
    cout << "Large commercial" << endl;
    cout << "Enter energy and Y or N for voltage discount"<<endl;
    cin >> energy >> ans;
    if ((energy <= 20) &&(ans=='N')){
        charge = 0;
    }
    else if((energy <= 20)&&(ans =='Y')){
        charge = 0;
    }
    
     else if((energy > 20)&&(ans=='Y')){
        charge=(((rate * energy) + (3 * energy)) - (vdis * energy));
    }
    
    else if((energy > 20)&&(ans=='N')){
        charge=(((rate * energy) + (3 * energy)));
    }
    
    else {
        cout << "Invalid character. Please try again" << endl;
        return large();
    }
    
    

cout << charge<< endl;
return charge;
}

int ind(){
    //double charge;
   // double drate;
    double rate = 0.05022;
    double basic = 0;
    double energy;
    double vdis = 0.2;
    char ans;
    double charge;
    cout << "Industrial" << endl;
    cout << "Enter energy and Y / N for Voltage discount"<<endl;
    cin >> energy >> ans;
    if ((energy <= 50) &&(ans=='N')){
        charge = 225;
    }
    else if((energy <= 50)&&(ans =='Y')){
        charge=(225 - (vdis * energy));
    }
    
     else if((energy > 50)&&(ans=='Y')){
        charge=(((rate * energy) + (2.75 * energy)) - (vdis * energy));
    }
    
    else if((energy > 50)&&(ans=='N')){
        charge=(((rate * energy) + (2.75 * energy)));
    }
    
    else {
        cout << "Invalid character. Please try again" << endl;
        return ind();
    }
    
    

cout << charge<< endl;
return charge;
}


