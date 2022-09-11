// program to calculate salary
// salary = numberofhours * Rate;  30 *1000 = 30000

#include<iostream>
using namespace std;
int main(){
    double salary, noofhrs, oth, rate=10.75, otrate=27.5;
    cout << "enter number of hours and overtime hours \n";
    cin >>  noofhrs >> oth; 
    salary = noofhrs * rate + oth * otrate;
    cout<<"your salary $= "<<salary;
    return 0;
}