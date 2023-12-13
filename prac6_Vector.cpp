#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Person
{
   public:
         int id;
         char name[10];
         
         void getdata()
         {
             cout<<"\nEnter ID :- ";
             cin>>id;
             cout<<"Enter Name :- ";
             cin>>name;
         }
         
         void show()
         {
             cout<<"\n ID :- "<<id;
             cout<<"\n Name :- "<<name;
         }
         
        bool operator ==(Person p1)
         {
             return(id == p1.id);
         }
};
bool check1(Person &p1,Person &p2)
{
   return(p1.id<p2.id);
}

int main()
{
   vector <Person> v;
   int n;
   Person p;
   vector<Person>::iterator itr;

   while(1)
   {
      cout<<"\n ------------------------------------------------------------------ ";
      cout<<"\n\n1.Add Record \n2.Show \n3.Search\n4.Delete\n5.Sort\n6.Exit\n";
      int ch;
      cout<<"\nEnter Your Choice :- ";
      cin>>ch;
      switch(ch)
      {
         case 1:
                p.getdata();
                v.push_back(p);
                cout<<"\n ------------------------------------------------------------------ ";
                cout<<"\n\t\t\tDATA ADDED SUCCUSSFULLY "; 
               break;
         case 2:
                for(itr=v.begin();itr!=v.end();itr++)
                {
                   itr->show();
                }
               
               break;
         case 3:
                cout<<"\nEnter ID to serach :- ";
                cin>>p.id;
                itr= find(v.begin(),v.end(),p); 
                if(itr!=v.end())
                {
                    cout<<"\nRecord Found ";
                    cout<<"\n ID :- "<<itr->id;
                    cout<<"\n Name :- "<<itr->name;
                }
               else
               {
                    cout<<"\nRecord Not Found ";
               }
               
               
               break;
        case 4 :
                cout<<"\nEnter ID to Delete :- ";
                cin>>p.id;
                itr= find(v.begin(),v.end(),p); 
                if(itr!=v.end())
                {
                    cout<<"\nRecord Found ";
                    cout<<"\n ID :- "<<itr->id;
                    cout<<"\n Name :- "<<itr->name;
                    
                    cout<<"\n\nData Deleted ";
                    v.erase(itr);
                }
               else
               {
                    cout<<"\nRecord Not Found ";
               }
               
               break;
         case 5:
               sort(v.begin(),v.end(),check1);
               cout<<"Sort Sucessfully ";
               break;
         case 6:
               cout<<"\n\t\t\tTHANK YOU ";
               exit(0);
         default :
               cout<<"\n ------------------------------------------------------------------ ";
               cout<<"\n\t\t\tINVALID CHOICE ";
      }
   }
   return(0);
}
