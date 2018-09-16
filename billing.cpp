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
  >> 03/01/2018                                                                                                                             
*/
#include <iostream>
#include <stdlib.h> // This library is used for exit function.
#include <fstream>
#include <string>   
using namespace std;

double small(double ene);
double res(double ener);
double large(double en);
double ind(double e);
double ener;
double ene;
double en;
double e;
double charge;
int main(){
    double id;
    double sch;
    double energy;
    string demand;
    char ans;
    double z;
    double x;
    char ch;
    string fname;
    char query;
    string file ;
    string ofile;
    cout <<"AVISTA"<< endl;
    cout << "Enter input filename:"<<endl;
    cin >> file;
    ifstream ifs;
    ofstream ofs;
    
    if (ifs.fail()) {
        cerr << "Unable to open file. Try again."<< endl;
        cin >> file; // terminate with error
    }
       
        cin.get(ch);
        ifs.eof();
        
        ofs.put(ch);
   while(!ifs.eof() ){
   
    ifs.eof();
    ifs.get(ch);
    ifs >> id ;
    ifs >> sch;
    ifs >> energy;
    ifs >> demand;
    ifs >> ans;
    
    cout <<  id << " " << sch<< " " << energy << " "<< demand<< " "<< ans<<" "<<charge<<endl;
   
    if (sch == 1){
        z = res(ener);
        }
        else if(sch == 11) {
            z = small(ene);
        }
        else if (sch == 12){
            z = large(en);
        }
        else if (sch == 21) {
            z = ind(e);
        }
        else {
            cout << "Invalid character. Please input again" << endl;
            cout <<" "<<  id << " " << sch<< " " << energy << " "<< demand<< " "<< ans<<charge<<endl;
        }
   
   }
        cout << "Do you want to extract to output file?(Y/N)"<<endl;
        cin >> query;
        if (query == 'Y'){
            cout<< "Enter output filename:"<< endl;
            cin>>ofile;
          
            ofs.put(ch);
            ofs << id << " " << sch<< " " << energy << " "<< demand<< " "<< ans<<" "<<charge <<endl;
        ofs.close();
        }
    // If we couldn't open the output file stream for writing
   else if (!ofs)
    {
        // Print an error and exit
        cerr << "Uh oh,"<<fname<<" could not be opened for writing!" << endl;
        exit(1);
    }
 
        else{
        exit(0);
   
   }
ifs.close();
ofs.close();
     
      
        return 0;
}


double res(double ener){
    
    double drate;
    double rate = 0.07971;
    double basic = 4;
    double demand;
   /// double ener;
    //cout << "Residential" << endl;
    //cout << "Enter ener"<< endl;
   // cin >> ener;
    if (ener <= 600){
        drate = 0.05255;
    }
    else {
        drate = 0.06156;
    }
double charge = (rate * ener) + (drate * ener);
cout << charge<< endl;
return charge;
}

double small(double ene){
    //double charge;
    double drate;
    double rate = 0.07971;
    double basic = 6;
   // double ene;
    double demand;
    //cout << "Small commercial" << endl;
    //cout << "Enter ener"<<endl;
    //cin >> ener;
    if (ene <= 20){
        drate = 0;
    }
    else {
        drate = 3.5;
    }
double charge = (rate * ene) + (drate * ene);
cout << charge<< endl;
return charge;
}

double large(double en){
    //double charge;
    double drate;
    double rate = 0.07971;
    double basic = 6;
    double vdis = 0.2;
  //  double en;
    double charge;
    char ans;
    double demand;
    //cout << "Large commercial" << endl;
    //cout << "Enter ener and Y or N for voltage discount"<<endl;
   // cin >> ener >> ans;
    if ((en <= 20) &&(ans=='N')){
        charge = 0;
    }
    else if((en <= 20)&&(ans =='Y')){
        charge = 0;
    }
    
     else if((en > 20)&&(ans=='Y')){
        charge=(((rate * en) + (3 * en)) - (vdis * en));
    }
    
    else if((en > 20)&&(ans=='N')){
        charge=(((rate * en) + (3 * en)));
    }
    
    else {
        cout << "Invalid character. Please try again" << endl;
        return  main();
    }
    
    

cout << charge<< endl;
return charge;
}

double ind(double e){
    //double charge;
   // double drate;
    double rate = 0.05022;
    double basic = 0;
    //double ener;
    double vdis = 0.2;
    char ans;
    double charge;
    double demand;
    //cout << "Industrial" << endl;
    //cout << "Enter ener and Y / N for Voltage discount"<<endl;
    //cin >> ener >> ans;
    if ((e <= 50) &&(ans=='N')){
        charge = 225;
    }
    else if((e <= 50)&&(ans =='Y')){
        charge=(225 - (vdis * e));
    }
    
     else if((e > 50)&&(ans=='Y')){
        charge=(((rate * e) + (2.75 * e)) - (vdis * e));
    }
    
    else if((e > 50)&&(ans=='N')){
        charge=(((rate * e) + (2.75 * e)));
    }
    
    else {
        cout << "Invalid character. Please try again" << endl;
        return  main();
    }
    
    

cout << charge<< endl;
return charge;
}


