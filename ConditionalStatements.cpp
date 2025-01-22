#include<iostream>
using namespace std;
int main(){
    // int a , b;
    // cout << "Enter the value of a : ";
    // cin >> a;
    // cout << "Enter thhe value of b : ";
    // cin >> b;
    // if(a>b){
    //     cout<< "A is greater.";

    // }
    // else{
    //     cout << "B is greater.";
    // }
    // int a;
    // cout << "Enter the value of A : ";
    // cin>>a;

    // if(a>0){
    //     cout << "The entered number is positive.";
    // }
    // else if(a<0){
    //         cout<< "The entered number is negative.";
    //     }
    //     else{
    //         cout<<"The entered number is 0.";
    //     }

    // int a = 5;
    // if (a==5){
    //     cout << "Five" <<endl;
    // }
    // else if (a>0){
    //         cout<<"A is grater than 0.";
    //     }
    //     else{
    //         cout << "Not mached";
    //     }

    // int a = 2;
    // int b = a+1;
    // if((a=3)==b){
    //     cout<<a;
    // }
    // else{
    //     cout<<a+2;
    // }

    // int a = 24;
    // if (a>20){
    //     cout<< "Love.";
    // }
    // else if (a==24){
    //     cout << "Nine";

    // }
    // else{
    //     cout<<"....";
    // }

    char a;
    cout << "Enter the character : ";
    cin >> a;
    if(islower(a)){
        cout<<"This is a lowercase character";
    }
    else if (isupper(a)){
        cout<<"This is an uppercase character";
    }
    else if (isdigit(a)){
        cout << "This is a number";
    }
    else{
        cout << "This is an invalid character.";
    }

    }
