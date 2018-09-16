#include <iostream>
#include "ListNode.h"
using namespace std;




int x,sum =0, n = 0;
double avg;

ListNode *head = NULL;

void input();
void insert(int);
void print();

void input(){
    while(1){
        cout<<"Please enter an integer"<<":"<<endl;
        cin >>x;
        if( x !=0 ){
            insert(x);
            n++;
            sum += x;
        }
        else{
            break;
        }
        }
    }

void insert(int x){
    ListNode *body = new ListNode();
    body->setValue(x);
    body->setNext(NULL);
    if(head == NULL){
        head = body;
    }
    else{
        ListNode *currentNode = head;
        while(currentNode->getNext() != NULL){
            currentNode->setNext(body);

        }
    }
}


void print(){
    if(n > 0){
        cout <<"you entered"<< endl;
        ListNode * currentNode = head;
        ListNode * temp;
        while(currentNode != NULL){
            cout<<currentNode->getValue()<<((currentNode->getNext()) = NULL ? '\n' : ',');
            temp = currentNode;
            currentNode = currentNode->getNext();
            delete temp;
    }
    avg = (double)sum / n;
    cout << "the avg is" <<avg<<endl;
    }
    else{
        cout<<"you entered no integer"<<endl;


    }
}

int main(){
    input();
    print();
    
}