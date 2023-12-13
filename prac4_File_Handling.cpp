#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Employee
{
    int id;
    char name[20],branch[20];
    float salary;
    public:
        Employee()
        {
            id=01;
            strcpy(name,"ABCXYZ");
            strcpy(branch,"ENGINEERING");
            salary=1000;
        }  
        void read()
        {
           cout<<"\nEnter ID :- ";
           cin>>id;
           cout<<"Enter Name :- ";
           cin>>name;
           cout<<"Enter Branch :- ";
           cin>>branch;
           cout<<"Enter Salary :- ";
           cin>>salary;
        }
        void show()
        {
            cout<<"\n"<<id<<"\t"<<name<<"\t"<<branch<<"\t"<<salary;
        } 
        void diskout()
        {
            ofstream out;
            out.open("abc",ios::app);
            out.write((char*)this,sizeof(*this));
            out.close();
        }     
        void  diskin()
        {
            ifstream in("abc");
            while(in.read((char*)this,sizeof(*this)))
            {
                show();
            }
            in.close();
             
        }
};
int main()
{
    int n;
    cout<<"Enter No. of Employee :-";
    cin>>n;
    Employee *ptr[n];
    for(int i=0;i<n;i++)
    {
        ptr[i]=new Employee;
        ptr[i]->read();
        ptr[i]->diskout();
    }
    Employee e;
    cout<<"\nID\tName\tBranch\tSalary\n";
    e.diskin();
    return(0);
 }
