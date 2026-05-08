#include<iostream>
using namespace std;

    int main(){
        int n,i,count=0;

        cout<<"enter the value of n: ";
        cin>>n;

        if(n<=1){
            cout<<"not a prime number";
        }else{
            for(i=1; i<= n; i=i+1){
                if(n%i==0){
                    count++;
                }
            }
            if(count==2){
                cout<<"prime number";
            }else{
                cout<<"Not a prime number";
            }
        }
        return 0;
    }
