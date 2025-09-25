#include <iostream>

using namespace std;

int main() {
    string name;
    string year;
    string movie;
    cout <<"Enter your name:";
    cin >>name;
    cout <<"Which year are you in:";
    cin >> year;
    cout <<"Enter your favorite movie";
    cin >> movie;

    cout <<"My name is " <<name <<".This is my " <<year <<" Year at LaGCC" <<". My favorite movie is "<<movie;
    return 0;
}