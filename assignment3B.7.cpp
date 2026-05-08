#include<iostream>
using namespace std;
    int main(){
        cout<<"prime numbers between 1 and 100 are: \n";

        for(int num=2; num<=100; num++){
            int i=2;
            bool isPrime=true;

            while(i<num){
                if(num%i==0){
                    isPrime = false;
                    break;
                }
                i++;
            }
                if(isPrime){
                    cout<<num<<" ";
                }
        }
        cout<<std::endl;
        return 0;
    }
