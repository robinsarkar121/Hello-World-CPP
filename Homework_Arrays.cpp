#include <iostream>
#include <string>
using namespace std;
int main () {
    string MTA_STOPS [9] {
        "90th Street",
        "82nd Street",
        "74th Street",
        "69th Street",
        "Woodside 61st Street",
        "52nd Street",
        "46th Street",
        "40th Street",
        "33rd Street"
    };
    for (int i=0; i <9; ++i)
    {
        cout<<"This is " <<MTA_STOPS[i]<<endl;
    }

    return 0;
}