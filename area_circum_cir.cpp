// Find the area and circum of the circle // 

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float rad, area, circum;
    cout << "Enter the Radius: "; 
    cin >> rad;
    area = 3.142 * rad * rad;
    circum = 2 * 3.142 * rad;
    cout << "Area = "<<area<< endl;
    cout << "Circumference = "<<circum<< endl;
    return 0;
}