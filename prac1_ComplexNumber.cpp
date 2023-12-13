#include<iostream>
using namespace std;

class Complex
{
     int real,imag;
     
     public:
        Complex()
        {
            real=0;
            imag=0;
         }
         friend istream& operator >> (istream& is ,Complex &b);
         friend ostream& operator << (ostream& os,Complex b);
         
         Complex operator + (Complex b2)
         {
              Complex b3;
              b3.real=real+b2.real;
              b3.imag=imag+b2.imag;
              return(b3);
         }
         
         Complex operator * (Complex b2)
         {
              Complex b3;
              b3.real= (real*b2.real)-(imag*b2.imag);
              b3.imag=(real*b2.imag)+(imag*b2.real);
              return(b3);
         } 
};

istream& operator >>(istream& is, Complex &b)
{
   is>>b.real>>b.imag;
}
ostream& operator <<(ostream& os,Complex b)
{
    os<<b.real<<"+"<<b.imag<<"i"<<endl;
}
 
int main()
{
   
   Complex c1,c2,c3,c4;
   cout<<"Enter First Real & Imaginary Number "<<endl;
   cin>>c1;
   cout<<"Enter Second Real & Imagiary  Number "<<endl;
   cin>>c2;
   
   c3=c1+c2;
   cout<<"Complex No. 1 = ";
   cout<<c1;
   cout<<"Complex No. 2 = ";
   cout<<c2;
   cout<<"Addition      = ";
   cout<<c3;
   
   c4=c1*c2;
   cout<<"Multiplication= ";
   cout<<c4;
   
   return(0);
  
}
