#include<iostream>
using namespace std;

int main(){
    cout<<"Hello PRANAY!"<<endl;

    //Data Types
    int a=100;
    cout<<a<<endl;

    char ch='P';
    cout<<ch<<endl;

    float b=10.0;
    cout<<b<<endl;

    bool bl=true;
    cout<<bl<<endl;

    double c=10.0110;
    cout<<c<<endl;

    long int d=9326977910;
    cout<<d<<endl;

    //sizeof different Data Types
    int x;
    double y;
    char z;

    cout<<"size of int is: "<<sizeof(x)<<" bytes"<<endl;
    cout<<"size of double is: "<<sizeof(y)<<" bytes"<<endl;
    cout<<"size of char is: "<<sizeof(z)<<" bytes"<<endl;

    //Type Casting
    int p='P';
    cout<<p<<endl;
    char q=35;
    cout<<q<<endl;
    /*char ch1=123456;
    cout<<ch1<<endl;*/

    //Arithmetic Operators
    int a1=18;
    int a2=12;
    int sum =a1+a2;
    int sub =a1-a2;
    int mult =a1*a2;
    int div =a1/a2;
    int rem =a1%a2;
    cout<<"Addition of two numbers is: "<<sum<<"\n";
    cout<<"Subtraction of two numbers is: "<<sub<<"\n";
    cout<<"Multiplication of two numbers is: "<<mult<<"\n";
    cout<<"Division of two numbers is: "<<div<<"\n";
    cout<<"Remainder of two numbers is: "<<rem<<"\n";

    //Relational Operators
    int x1=5;
    int x2=5;

    bool first(x1==x2);
    cout<<first<<endl;

    bool second(x1>x2);
    cout<<second<<endl;

    bool third(x1<x2);
    cout<<third<<endl;

    bool fourth(x1>=x2);
    cout<<fourth<<endl;

    bool fifth(x1<=x2);
    cout<<fifth<<endl;

    bool sixth(x1!=x2);
    cout<<sixth<<endl;

    //Cin - User Input
    int c1;
    cout<<"value of c1 just after initialization is: "<<c1<<endl;
    cin>>c1;
    cout<<"value of c1 just after cin statement is: "<<c1<<endl;

return 0;
}