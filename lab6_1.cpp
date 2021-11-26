#include<iostream>
using namespace std;

int main(){
    int a,b,d,c;

    do{
        cout << "Enter an integer: ";
        cin >> a;
        if(a == 0){

        }else if(a%2 == 0){
            b += 1;
        }else{
            c += 1;
        }
        d++;
    }while(a != 0);

    if(d == 0){
        cout << "#Even numbers = 0\n";
        cout << "#Odd numbers = 0";
    }else{
        cout << "#Even numbers = " << b;
        cout << "\n";
        cout << "#Odd numbers = " << c;
    }
    return 0;
}
