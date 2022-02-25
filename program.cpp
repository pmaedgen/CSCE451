#include <stdio.h>
#include <iostream>
#include <random>

using namespace std;

int add(int a, int b, double c){
    int temp;
    a+b;
    c-b+a;
    return c-a;
}

int printNum(int num){
    cout<<num+1;
    return num;
}

bool myRandom(){
    if(rand()%2 >= 1){
        return true;
    }
    return false;
}


int main() {
    srand (time(NULL));
    cout<< "Your inputs will be added together :)";
    int a,b,c;
    cout<< "Enter an Int: ";
    cin>>a; 
    cout<< "Enter an Int: ";
    cin>>b;
    cout<< "Enter an Int: ";
    cin>>c;

    bool ez = myRandom();
    cout<<"Funny Face:"
    cout<<":"<<ez<<endl;


    if(ez){
        cout<<a+b+c<<endl;
    }
    else{
       cout<<" "<<printNum(add(a,b,c));
    }
    // printf() displays the string inside quotation
    return 0;
}






