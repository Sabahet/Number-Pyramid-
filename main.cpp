
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
//int daysOfMonth(string,int);
int pyramid(int);
void daysOfMonth(int);
int main() {
    int x;
    cout << "Enter number of rows to create a pyramid : ";
    cin >> x;
    pyramid(x);
    int a;
    int z;
    cout << "Please enter the year and the month number and ill tell you how many days are in that month!"<< endl;
    cin >> a;
    cin >> z;
    daysOfMonth(z);


    return 0;
}

void daysOfMonth(int x){

    int months [12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string names [12]= {"January", "Februrary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    if(x%4==0){
        months [1] = 29;
    }
    cout << "There are " << months[x-1] << " days in the month of " << names[x-1] << endl;

}




int pyramid(int x){
    
    int count=0;
    int count1=0;
    int k=0;
    
    for(int i = 1; i <= x; ++i)
    {
        for(int space = 1; space <= x-i; ++space)
        {
            cout << "  ";
            ++count;
        }
        while(k != 2*i-1)
        {
            if (count <= x-1)
            {
                cout << i+k << " ";
                ++count;
            }
            else
            {
                ++count1;
                cout << i+k-2*count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;
        cout << endl;
    }
    return 0;
}

