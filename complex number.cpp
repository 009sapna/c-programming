#include<iostream>
using namespace std;

struct complex{
    int real,imag;
};
    complex input(){
        complex c;
        cin>>c.real>>c.imag;
        return c;
    }
    complex add(complex c1,complex c2){
        complex sum;
        sum.real=c1.real+c2.real;
        sum.imag=c1.imag+c2.imag;
        return sum;
    }
    complex substract(complex c1,complex c2){
        complex diff;
        diff.real=c1.real-c2.real;
        diff.imag=c1.imag-c2.imag;
        return diff;
    }
    void display( complex c){
        if(c.imag>=0)
            cout<<c.real<<"+"<<c.imag<<"i";
        else
            cout<<c.real<<"-"<<-c.imag<<"i";
    }
    int main(){
        complex c1,c2,sum,diff;
        cout<<"enter the first complex number(real or imag): ";
        c1=input();
        cout<<"enter the second complex number(real or imag): ";
        c2=input();
        sum=add(c1,c2);
        diff=substract(c1,c2);
        cout<<"\n sum";
        display(sum);
        cout<<"\n diff";
        display(diff);
        return 0;
    }
