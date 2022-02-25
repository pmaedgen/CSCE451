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

void frog(){
    cout<<"         o  o   o  o"<<endl; 
    cout<<"         |\\/ \\^/ \\/|"<<endl;
    cout<<"         |,-------.|"<<endl;
    cout<<"       ,-.(|)   (|),-."<<endl;
    cout<<"       \\_*._ ' '_.* _/"<<endl;
    cout<<"        /`-.`--' .-'\\"<<endl;
    cout<<"   ,--./    `---'    \\,--."<<endl;
    cout<<"   \\   |(  )     (  )|   /"<<endl;
    cout<<"hjw \\  | ||       || |  /"<<endl;
    cout<<"`97  \\ | /|\\     /|\\ | /"<<endl;
    cout<<"     /  \\-._     _,-/  \\"<<endl;
    cout<<"    //| \\\\  `---'  // |\\\\"<<endl;
    cout<<"   /,-.,-.\\       /,-.,-.\\"<<endl;
    cout<<"  o   o   o      o   o    o"<<endl;

    cout<<"Your job is to please the King Frog"<<endl<<"              GOOD LUCK"<<endl<<endl;
}

bool myRandom(){
    if(rand()%2 >= 1){
        return true;
    }
    return false;
}

int compute_area(unsigned int length, unsigned int width) {
  int area = length * width;
  return area;
}


int main() {
    frog();
    srand (time(NULL));
    cout<< "Your inputs will be instramental in pleasing the king :)"<<endl;
    int a,b,c,guess;
    bool kingHappy = false;

    cout<< "Enter an Int: ";
    cin>>a;
    cout<< "Enter an Int: ";
    cin>>b;
    cout<< "Enter an Int: ";
    cin>>c;

    bool ez = myRandom();

    cout<<"The Jester takes your numbers and makes a Funny Face"<<endl;
    cout<<"8 "<<ez<<endl;

    cout<< "The King asks you \"What the Jester is doing with your numbers?\" "<<endl;
    cout<<"Your answer to the King: ";
    cin>>guess; 

    cout<< "The Jester Returns the Result: "<<endl;
    if(ez){
        cout<<a+b+c<<endl;
        if(guess == a + b + c){
            kingHappy = true;
        }
    }
    else{
       cout<<printNum(add(a,b,c))<<endl;
       if(guess == 10+(c-a)*10+c-a){
           kingHappy = true;
       }
    }

    if(kingHappy){
        cout<<"The King is happy with your answer. Congrats you get to live!" <<endl;
    }
    else{
        cout<<"Uh Oh, the king is not happy. You Lose"<<endl;
    }

    cout<<endl<<endl<<endl;
    cout<<"Next Challange!!!"<<endl;
    cout<<endl;

    // printf() displays the string inside quotation


    cout << "\nFind the area of a rectangle given its dimensions ;)" << endl;
    unsigned int l, w;
    int area;

    cout << "Enter an length: ";
    cin >> l;
    cout << "Enter an width: ";
    cin >> w;

    ez = myRandom();

    if(ez) {
      w = w << 5;
    }

    area = compute_area(l, w);

    cout << "The area of the rectangle is: " << area << endl;


    return 0;
}
