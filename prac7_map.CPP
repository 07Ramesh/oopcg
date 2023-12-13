#include<iostream>
#include<algorithm>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<string,int>mymap;
    int n,i;
    cout<<"\nENTER THE NUM OF STATES:";
    cin>>n;
    string state;
    int p;
    for(i=0;i<n;i++)
    {
        cout<<"\nENTER STATE AND POPULATION:";
        cin>>state>>p;
        mymap.insert(pair<string,int>(state,p));
    }
    map<string,int>::iterator itr;

    for(itr=mymap.begin();itr!=mymap.end();itr++)
    {cout<<"STATE:"<<itr->first<<" POPULATION:"<<itr->second<<"CR"<<endl;
    }
    cout<<"\nENTER STATE FOR SEARCHING THE POPULATION:";
    cin>>state;
    cout<<"\nPOPULATION OF STATE "<<state<<"is "<<mymap[state]<<"CR";
return(0);
}
