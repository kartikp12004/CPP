#include<iostream>
using namespace std;
int main(){
    // char input;
    // cin>>input;
    // switch(input){
    //     case 'R':
    //     case 'r' :
    //     cout<<"stop";
    //     break;
    //     case 'G' : 
    //     case 'g': cout<<"Go";
    //     break;
    //     case 'y' : 
    //     case 'Y' : cout<<"Wait";
    //     break;
    //     default:
    //     cout<<"invalid input";
    // }

    // cout<<"Enter the number of the month: ";
    // int months;
    // cin>>months;
    // switch(months){
    //     case 1:
    //     cout<<"January";
    //     break;
    //     case 2:
    //     cout<<"February";
    //     break;
    //     case 3:
    //     cout<<"March";
    //     break;
    //     case 4: 
    //     cout<<"April";
    //     break;
    //     case 5:
    //     cout<<"May";
    //     break;
    //     case 6:
    //     cout<<"June";
    //     break;
    //     case 7:
    //     cout<<"July";
    //     break;
    //     case 8:
    //     cout<<"August";
    //     break;
    //     case 9:
    //     cout<<"September";
    //     break;
    //     case 10:
    //     cout<<"October";
    //     break;
    //     case 11:
    //     cout<<"November";
    //     break;
    //     case 12:
    //     cout<<"December";
    //     break;
    //     default: cout<<"Invalid value!! Please try again";
    // }

    cout<<"Enter two numbers: ";
    int num1, num2;
    cin>> num1;
    cin>> num2;
    cout<<"Enter operator (+, -, *, /, %, ^): ";
    char op;
    cin>>op;
    switch(op){
        case '+': cout<<num1+num2<<endl;
        break;
        case '-': cout<<num1-num2<<endl;
        break;
        case '*': cout<<num1*num2<<endl;
        break;
        case '/': 
        if(num2==0){
            cout<<"Division by 0 is not allowed";
        }
        else{
            cout<<num1/num2;
        }
        break;
        case '%': cout<<num1%num2;
        break;
        case '^': {
            int result = 1;
            switch (num2) {
                case 0: result = 1; break;
                case 1: result = num1; break;
                case 2: result = num1 * num1; break;
                case 3: result = num1 * num1 * num1; break;
                case 4: result = num1 * num1 * num1 * num1; break;
                default: cout << "Exponent too large to handle with switch." << endl; return 0;
            }
            cout << "Result: " << result << endl;
        } break;
        default:
        cout<<"invalid input";       
    }
}
