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
  >> 05/03/2018                                                                                                                             
*/
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <fstream>
#include<cstring>
#include<string>
using namespace std;
int Robottype;

///////////////////////////////*
/* Robot class is defined */
////////////////////////////////
class Robot{
private:
int Robotnumber;
public:
Robot(); 
Robot(int Robotnumber);
int &getName() {return Robotnumber;};
void setRobotnumber(int w);


};
//////////////////////////////////////////
//int Robot :: Robot(Robotnumber){
//return Robotnumber;    
    


void Robot :: setRobotnumber(int w){
    if(w >= 0)
    Robotnumber = w;
    else
    exit(-1);
}
Robot R1();
Robot R2();
Robot R3();
Robot R4();
//R1.setRobotnumber(1);
//////////////////////////////
///////////////////////////////////////

/////////////////////*
/*
First linked list
*/
class Node
{
public:
    Node* next;
    int data;
};
class LinkedList_M
{
public:
    int length;
    Node* head;
        Node * s;


    LinkedList_M();
    ~LinkedList_M();
    void add(int data);
    void deploy();
    void retrieve();
    void print();
};

LinkedList_M::LinkedList_M(){
    this->length = 0;
    this->head = NULL;
}

LinkedList_M::~LinkedList_M(){
    std::cout << "LIST DELETED";
}

void LinkedList_M::add(int data){
    Node* node = new Node();
    node->data = data;
    node->next = this->head;
    this->head = node;
    this->length++;
}


void LinkedList_M::deploy(){
    int value, pos, i;

        if (head == NULL)

        {

            cout<<"List is empty"<<endl;

            return;

        }

        cout<<"Enter the Robot to be deployed: ";

        cin>>pos;

        cout<<"Enter the robot name: ";

        cin>>value;

        //struct node *s, *ptr;

        s = head;

        if (pos == 1)

        {

            head->data = value; 

        }

        else

        {

            for (i = 0;i < pos - 1;i++)

            {

                if (s == NULL)

                {

                    cout<<"There are less than "<<pos<<" elements";

                    return;

                }

                s = s->next;

            }

            s->data = value;  

        }

        cout<<"Robot is deployed"<<endl;
}

void LinkedList_M::retrieve(){
    int value, pos, i;

        if (head == NULL)

        {

            cout<<"List is empty"<<endl;

            return;

        }

        cout<<"Enter the Robot to be retrieved: ";

        cin>>pos;

        cout<<"Enter the robot name: ";

        cin>>value;

        //struct node *s, *ptr;

        s = head;

        if (pos == 1)

        {

            head->data = value; 

        }

        else

        {

            for (i = 0;i < pos - 1;i++)

            {

                if (s == NULL)

                {

                    cout<<"There are less than "<<pos<<" elements";

                    return;

                }

                s = s->next;

            }

            s->data = value;  

        }

        cout<<"Robot is retrieved"<<endl;
}
void LinkedList_M::print(){
    Node* head = this->head;
    int i = 1;
    while(head){
        std::cout << i << ": " << head->data << std::endl;
        head = head->next;
        i++;
    }
}
////////////////////////////
/////////////////////////list for scout (s)
class LinkedList_S
{
public:
    int length;
    Node* head;
        Node * s;


    LinkedList_S();
    ~LinkedList_S();
    void add(int data);
    void deploy();
    void retrieve();
    void print();
};

LinkedList_S::LinkedList_S(){
    this->length = 0;
    this->head = NULL;
}

LinkedList_S::~LinkedList_S(){
    std::cout << "LIST DELETED";
}

void LinkedList_S::add(int data){
    Node* node = new Node();
    node->data = data;
    node->next = this->head;
    this->head = node;
    this->length++;
}

void LinkedList_S::deploy(){
    int value, pos, i;

        if (head == NULL)

        {

            cout<<"List is empty"<<endl;

            return;

        }

        cout<<"Enter the robot that is to be deployed: ";

        cin>>pos;

        cout<<"Enter the Robot type: ";

        cin>>value;

       // struct node *s, *ptr;

        s = head;

        if (pos == 1)

        {

            head->data = value; 

        }

        else

        {

            for (i = 0;i < pos - 1;i++)

            {

                if (s == NULL)

                {

                    cout<<"There are less than "<<pos<<" robots.";

                    return;

                }

                s = s->next;

            }

            s->data = value;  

        }

        cout<<"Robot is deployed."<<endl;
}

void LinkedList_S::retrieve(){
    int value, pos, i;

        if (head == NULL)

        {

            cout<<"List is empty"<<endl;

            return;

        }

        cout<<"Enter the robot that is to be retrieved: ";

        cin>>pos;

        cout<<"Enter the Robot type: ";

        cin>>value;

       // struct node *s, *ptr;

        s = head;

        if (pos == 1)

        {

            head->data = value; 

        }

        else

        {

            for (i = 0;i < pos - 1;i++)

            {

                if (s == NULL)

                {

                    cout<<"There are less than "<<pos<<" robots.";

                    return;

                }

                s = s->next;

            }

            s->data = value;  

        }

        cout<<"Robot is retrieved."<<endl;
}

void LinkedList_S::print(){
    Node* head = this->head;
    int i = 1;
    while(head){
        std::cout << i << ": " << head->data << std::endl;
        head = head->next;
        i++;
    }
}
////////////////////////
////////////////////////////
////////////////////////////

//Array for robot objects (just for testing the list and objects) psudo vector

//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////
int main(int argc, char const *argv[]){
    char command;
LinkedList_M * list_M = new LinkedList_M();
LinkedList_S * list_S = new LinkedList_S();
string M;
string S;
string input;
string line;
int col1[1000];
//declare arrays to store the string column values
string col2[1000], col3[1000],col4[1000];
int lineno =0;
cout << "Enter in your text file name:" << endl;
cin>>input;


ifstream myfile (input.c_str());
if (myfile.is_open())
{
//lineno variabel to add row to index lineno in the array
lineno = 0;
while ( getline (myfile,line) )
{
//split the line and read into variable below
istringstream ss(line);
int c1;

string c2,c3,c4;
ss >> c1 >> c2 >> c3 >> c4 ;
//store the values in the array
col1[lineno] = c1;
col2[lineno] = c2;
col3[lineno] = c3;
col4[lineno] = c4;   
lineno+=1;

}

myfile.close();
//printing content of the array
for(int i=0;i<lineno;i++){
cout<<col1[i] << " "<<col2[i] << " " << col3[i] << " "<< col4[i] << " "<<endl;
}
}
else{
cout << "Unable to open file";
}
for(int i=0;i<lineno;i++){    
if(col2[i] == "M"){
       //string Robotnumber = ;
        list_M->add(col1[i]);
       
            
    
} 
else if(col2[i] == "S"){
    //string Robotnumber = col1[i];
    list_S->add(col1[i]);
    
    }
    else{
        break;
    }
}
    //delete list_M;
     
    std::cout << "List Length: " << list_M->length << std::endl;
    std::cout << "List Length: " << list_S->length << std::endl;
    list_M->print();
    list_S->print();
   
///dispatch a robot from argus _scout robot (list_S)
///deleting the node and storing the input quadrant.
cout<< "Enter your Command:" << endl;
cin >> command;

if(command == 'D'){
 list_S->deploy();
}
else if (command == 'd'){
    list_M->deploy();
}
else if (command == 'q'){
    exit(0);
    }
    else {
        exit(0);
    }

list_M->print();
    list_S->print();
    return 0;

}