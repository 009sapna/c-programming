#include<iostream>
using namespace std;
int main(){
    int a=7;
    int b=7;


    cout<<"Before swapping a = " << a <<", b = " << b<< endl;


    b=a+b;
    a=b-a;
    b=b-a;

    cout<< "After swapping a = " << a <<", b = "<< b << endl;



}
