#include <iostream>
using namespace std;
int main() {
    const double fullFare = 2.90;
    const double halffare= 1.45;
    const double jumper=0.00;
    double totalMoneyMade = 0.0;
    int input;
    cout<<"Please put the count of Swipes"<<endl;
    cin>>input;

    for (int i=0; i<=input; i++) {
        //cout << i << endl;
        if (i % 3==0) {
              totalMoneyMade+=jumper;
        }
        else if (i % 5==0) {
            totalMoneyMade+=halffare;
        }
        else {
            totalMoneyMade+= fullFare;
        }
    }

    cout << "Total is " << totalMoneyMade;
}