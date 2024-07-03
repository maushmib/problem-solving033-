
#include<iostream>
using namespace std;
void add(int a,int b)
{
cout<<"the addition of the numbers are:"<<a+b<<endl;
}

void sub(int a,int b){
int c;
c=a+(-1)*b;
cout<<"the subtraction of two numbers are:"<<c;
}

void mul(int a,int b){
int mul=0;
for(int i=0;i<b;i++){
mul=mul+a;
}
cout<<"the multiplication of two numbers are:"<<mul;
}

void divi(int a,int b){
int quotient,remainder=a,y=0;
do{
        quotient++;
        remainder=remainder-b;
  }while(remainder>=b);
    
cout<<"the division of two numbers are:"<<endl<<"quotient:"<<quotient<<endl<<"remainder:"<<remainder;
    
}



int main(){
    int a,y,b,l;
    do{
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    cout<<"what do you want to perform 1.addition 2.subtraction 3.multiplication 4.division:";
    
    cin>>y;
    cout<<endl;
    switch(y){
        case 1:add(a,b);
        cout<<endl<<endl;
        break;
        case 2:sub(a,b);
        cout<<endl<<endl;
        break;
        case 3:mul(a,b);
        cout<<endl<<endl;
        break;
        case 4:divi(a,b);
        cout<<endl<<endl;
        break;
    }cout<<"do you want to continue:";
        cin>>l;
    }while(l==1);
     return 0;
}
