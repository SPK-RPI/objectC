#include <iostream>
using namespace std;
int n, i, reverse, temp, remainder, num,rem,revr;
double sum;
class Demo
{
private:
  int readNo()
  {
    cout << "Enter an integer:====>>> ";
    cin >> n;
    return n;
  }

public:
  float factorial()
  {
    if (n < 0)
    {

      cout << "Error 404 Enter an integer...!!!!!!!" << endl;
    }
    else
    {
      sum = 1;
      for (i = 1; i <= n; i++)
      {
        sum = i * sum;
      }
      cout << "The factorial of " << n << " is " << sum << endl;
    }
  }

public:
  int reverseNo()
  {
    n = temp;
    while (n > 0)
    {

      remainder = n % 10;
      reverse = reverse * 10 + remainder;
      n /= 10;
    }
    cout << "Original number is ===>> " << temp << endl;
    cout << "Reversed number is =====>> " << reverse << endl;
    if (reverse == temp)
    {
      cout << "number is a pelindrome " << endl;
    }
    else
    {
      cout << "Entered number is not pelindrome" << endl;
    }
    cin.get();
  }
public:
int isPalindrome(){   
  temp=n;
 while(temp!=0)
  {
  rem=temp%10;
  revr=revr*10+rem;
 temp/=10;

 }
 if(revr==n)
 cout<<"plendrome";
 else
 cout<<"not a plendrome";
	return 0;
 }


 int isArmstrong(){

  }

public:
  int readNo1(){
    int readNo();
   }
};
int main()
{
  Demo demo;
  demo.readNo1();
  demo.factorial();
  demo.reverseNo();
  demo.isPalindrome();
  demo.isArmstrong();
  cin.get();
}
