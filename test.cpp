#include <iostream>
using namespace std;
char a[100];
class employee
{
public:
    void displayInfo()
    {
        cout << "Your name is....."<<a;
    cin.get();   
    }
public:
    void getInfo()
    {
cout<<"Enter your name :=== >>";
cin>>a;
    }
};
int main()
{
    employee shiva;
    shiva.getInfo();
    shiva.displayInfo();
    cin.get();
    return 0;
}