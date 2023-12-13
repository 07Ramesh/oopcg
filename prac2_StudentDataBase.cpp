#include<iostream>
#include<cstring>
using namespace std;
class Student
{
  int rno;
  char name[20],class1[10],divi[10],dob[15],bgroup[15],con[15],add[20],drino[15];
  
  static int count;
  
  public:
       Student()
       {
           rno=1025;
           strcpy(name,"GDP");
           strcpy(class1,"FY_22");
           strcpy(divi,"K-Div");
           strcpy(dob,"01-01-2001");
           strcpy(bgroup,"A+");
           strcpy(con,"9876543210");
           strcpy(add,"Ahmednagar");
           strcpy(drino,"GTRQE5555I");
           count++;
       }
       Student(Student &s)
       {
           rno=s.rno;
           strcpy(name,s.name);
           strcpy(class1,s.class1);
           strcpy(divi,s.divi);
           strcpy(dob,s.dob);
           strcpy(bgroup,s.bgroup);
           strcpy(con,s.con);
           strcpy(add,s.add);
           strcpy(drino,s.drino);
           
           count++;
       }
       void getdata()
       {
          cout<<"Enter Roll No ";
          cin>>rno;
          cout<<"Enter Name ";
          cin>>name;
          cout<<"Enter Class ";
          cin>>class1;
          cout<<"Enter Division ";
          cin>>divi;
          cout<<"Enter Date Of Birth ";
          cin>>dob;
          cout<<"Enter Blood Group ";
          cin>>bgroup;
          cout<<"Enter Contact Details ";
          cin>>con;
          cout<<"Enter Address ";
          cin>>add;
          cout<<"Enter Driving License Number ";
          cin>>drino;
       }
       friend void display(Student &s);
       static void showCount()
       {
           cout<<"\n\nTotal Number of Student : "<<count;
       }
       ~Student()
       {
           ;
       }
};
int Student::count=0;

void display(Student &s)
{
    cout<<s.rno<<"\t"<<s.name<<"\t"<<s.class1<<"\t"<<s.divi<<"\t"<<s.dob<<"\t"<<s.bgroup<<"\t"<<s.con<<"\t"<<s.add<<"\t"<<s.drino<<"\n";  
}
int main()
{
   Student s1; 
   //s1.getdata();
   Student s2(s1);
   int n;
   cout<<"Enter total no of Student ";
   cin>>n;
   Student *p[n];
   
   for(int i=0;i<n;i++)
   {
       p[i]=new Student;
       p[i]->getdata();
   }
   
   cout<<"\nR.NO\tName\t\tClass\tDiv.\tDOB\t\tBloodG\tContact\t\tAddress\t\tDri. No.\n\n";
   display(s1);
   display(s2);
   for(int i=0;i<n;i++)
   {
       display(*p[i]);
   }
   Student::showCount();
   return(0);
}