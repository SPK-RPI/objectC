#include <iostream>
using namespace std;
int n, i,reverse,temp,remainder,num;
double sum;
class Demo {
public:
  int readNo() {
    cout << "Enter an integer:====>>> ";
    cin >> n;
    return n;
  }

public:
  float factorial() {
    if (n <0) {

      cout << "Error 404 Enter an integer...!!!!!!!" << endl;
    } else {
        sum=1;
      for (i = 1; i <= n; i++) {
        sum = i*sum;
      }
      cout << "The factorial of " << n << " is " << sum << endl;
    }
   
  }
public:
    int reverseNo(int n){
        n=temp;
        while(n>0){
      
        remainder=n%10;
         reverse=reverse*10+remainder;
         n/=10;
        
        
        }
        cout<<"Original number is ===>>"<<temp<<endl;
        cout<<"Reversed number is =====>>"<<reverse<<endl;
        if(reverse==temp){
            cout<<"number is a pelindrome "<<endl;
        }else{
            cout<<"Entered number is not pelindrome"<<endl;
        }
        cin.get();
    }
};
int main() {
  Demo demo;
  demo.readNo(); // get no from user
  demo.factorial();
  demo.reverseNo();
  // isPalindrome();
  // isArmstrong();
  cin.get();
}
