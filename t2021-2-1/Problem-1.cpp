#include <bits/stdc++.h>
using namespace std;

class Calculator{

public:
    double a,b;

    Calculator(double val1,double val2){
        a = val1, b = val2;
    }

    double Addition(){
        return a+b;
    }
    double Substraction(){
        return a-b;
    }
    double Multiplication(){
        return a*b;
    }
    double Division(){
        if(b!=0)
        return a/b;
        else
        return -1;
    }
};


int main(){
    cout<<"Welcome to the Calculator"<<endl;
    cout<<"Enter two numbers"<<endl;
    double num1, num2;
    cin>>num1>>num2;
    cout<<"Enter the type of operation"<<endl;
    here:
    string op; cin>>op;

    Calculator ob = Calculator(num1, num2);
    cout<<"The result is ";

    if(op == "Addition"){
        cout<<ob.Addition()<<endl;
    }
    else if(op == "Substraction"){
        cout<<ob.Substraction()<<endl;
    }
     else if(op == "Multiplication"){
        cout<<ob.Multiplication()<<endl;
    }
     else if(op == "Division"){
        cout<<ob.Division()<<endl;
    }
    else{

        cout<<"Enter correct type of operation"<<endl;
        goto here;
    }
    return 0;
}