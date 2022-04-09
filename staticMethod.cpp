// all objects share the static variables
// normal variable is individual for the objects

#include <bits/stdc++.h>
using namespace std;

class Employee{
    int id;
    // By default static variables comes with 0,
    // cannot instantiate static members here.
    int static count;
    
    public:
        void setData(void){
            cout<<"enter the id: "<<endl;
            cin>>id;
            count++;
        }
        
        void getData(void){
            cout<<"The Id Of the email is: "<<id<<"and this is the employee number"<<count<<endl;
        }
        
        static void getCount(void){
            // cout<<id; //throws an error
            // can access only static memebers of the class
            cout<<"The value of count is "<<count<<endl;
        }

};

// should do external declaration when using static memebers in class
//if u want initial value for count then instantiate here 
int Employee::count; 

int main(){
    Employee cheran, virat, rohit; 
    // cannot do this due to private
    // cheran.id = 1;
    // cheran.count = 1;
    
    cheran.setData();
    cheran.getData();
    
    Employee::getCount();
    
    virat.setData();
    virat.getData();
    
    Employee::getCount();
    
    rohit.setData();
    rohit.getData();

    Employee::getCount();
    
    return 0;
}
