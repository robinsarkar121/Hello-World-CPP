#include <iostream>

using namespace std;

int main(){
    int street;
    cout<<"Enter which streets are you in?";
    cin>>street;

    cout<< endl;

    if (street <=00) {
        cout<<"yoo you are in no where";
       }
    else if (street>0 && street<34){
        cout<<"yooo my man you made it to the chealsea area";
    }
    else if (street>=34 && street<=59) {
        cout<< "yoo my man you made it to the midtown manhattan";
    }
    else if (street>59 && street<=110){
        cout<<"Yo yo you are in the upper west side";
    }
    else if(street>110 && street<=145){
        cout<<"Woohoo you made it to Harleem";
    }
     else if(street>145 && street<=207) {
        cout <<"Nice you made it to the washington heights area";
     }
     else {
        cout<<"Broooo you are not in manhattan anymore Bye Bye"<<endl;
     }
    return 0;
}