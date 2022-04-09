#include <bits/stdc++.h>
using namespace std;

class Employee{
    int id;
    // By default static variables comes with 0,
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

};

// should do external declaration when using static memebers in class
int Employee::count;

int main(){
    Employee cheran, virat, rohit; 
    // cannot do this due to private
    // cheran.id = 1;
    // cheran.count = 1;
    
    cheran.setData();
    cheran.getData();
    
    virat.setData();
    virat.getData();
    
    rohit.setData();
    rohit.getData();

    
    return 0;
}
