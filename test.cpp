#include<iostream>
using namespace std;
int a,b;
class calculation{
public:
float add(){
cout<<"the sum is "<<a+b<<endl;
//cin.get();
}
float sub(){

}
float div(){

}
float mul(){
cin.get();
}


};
int main(){
    cout<<"enter 1 no.:==>> "<<endl;
    cin>>a;
    cout<<"enter 2 no.:===>> "<<endl;
    cin>>b;
 calculation cal;
 cal.add();
 
 cal.div();
 cal.mul();
 cal.sub();
}