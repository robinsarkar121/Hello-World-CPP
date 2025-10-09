#include <iostream>
using namespace std;
int main ()
{
int credits;
double GPA;
char holds;
char coursereq;
cout << "How many credits you have now?";
cin >> credits;
cout << "Whats your GPA?";
cin >> GPA;
cout <<"Do you have any holds? (y/n)";
cin >> holds;
cout << "Do you have any course remaining? (y/n)";
cin >> coursereq;

if ( credits >=60 && GPA >= 2.0 && holds=='n' && coursereq=='n') {
    cout <<"Congratulations! you are eligible to Graduate";
}
else {
    cout <<"Sorry! you are not eligible to Graduate";
}
return 0;
}