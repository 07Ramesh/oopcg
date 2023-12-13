#include<iostream>
#include<string.h>
using namespace std;

class Publication 
{
     char title[100];
     float price;
     
     public :
         Publication()
         {
              strcpy(title,"NULL");
              price =0;
         }
         
         void getdata()
         {
               cout<<"\n\nEnter Title :- ";
               cin>>title;
               cout<<"Enter Price :- ";
               cin>>price;
         }
         void show()
         {
              cout<<"\n"<<title<<"\t"<<price<<"\t";
         }
};
class Book : public Publication 
{
    int pg_count;
    
    public:
        Book()
        {
             
             pg_count=0;
        }
         
        void getdata()
        {
             Publication :: getdata();
             cout<<"Enter Total Pages :- ";
             cin>>pg_count;
        }
        void show()
        {
             Publication::show();
             cout<<pg_count;
        }
};
class Tape : public Publication 
{
    float t_time;
    
    public:
       Tape()
       {
           t_time=0;
       }
       
       void getdata()
       {
            Publication :: getdata();
            cout<<"Enter Playback Time :- ";
            cin>>t_time;
       }
       void show()
       {
           Publication ::show();
           cout<<t_time;
       }
};
 
int main()
{
   
    int n,m;
    cout<<"\nEnter Total No. of Books :- ";
    cin>>n;
    Book *bk[n];
    for(int i=0;i<n;i++)
    {
         
          bk[i]= new Book;
          cout<<"\nEnter "<<i+1<<" Book Data :- ";
          bk[i]->getdata();
    };
   
 
 
    cout<<"\nEnter Total No. of Tapes :- ";
    cin>>m;
    Tape *tk[m];
    for(int i=0;i<m;i++)
    {
         
          tk[i]= new Tape;
          cout<<"\nEnter "<<i+1<<" Tape Data :- ";
          tk[i]->getdata();
    }
    
    cout<<"\n\nTitle\tPrice\tT_Pages\n";
    for(int i=0;i<n;i++)
    {
       bk[i]->show();
    }
   cout<<"\n\n\nTitle\tPrice\tT_PlayBack Time\n";
    for(int i=0;i<m;i++)
    {
       tk[i]->show();
    }
   return(0);
}
