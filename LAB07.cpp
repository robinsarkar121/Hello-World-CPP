#include <iostream>
#include <string>
using namespace std;

const double C_F= 9.0/5;
const double F_C= 5.0/9;
double celcius, ferenhite;
int choice;
int main(){

    cout<<"\n1--> Celcius to ferhenhite";
    cout<<"\n2--> Ferenhite to celcius";
    cout<<"\nPlease choose which option you wanna do only type 1 or 2"<<endl;
    cin>>choice;

        if (choice==1) {
        cout<<"Please enter the temperature in Celcius: "<<endl;
            cin>>celcius;
        cout<<"Result: "<<(celcius*C_F)+32<<endl;
        }
        else if (choice==2) {
        cout<<"Please enter the temperature in Fahrenheit: "<<endl;
            cin>>ferenhite;
        cout<<"Result: "<<(ferenhite-32)*F_C<<endl;
        }
        else {
            cout<<"SORRY WRONG INPUT PLEASE SELECT (1/2)";
        }

    return 0;
}