#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "ukr");
    int a, b, c, number=0;
        cout<<"Введіть бажаний номер"<<endl;
        cin>>a;
   for (b=1;b<11;b++){
        c = a * b;
        if(number<=10){
        number++;
        } 
       cout<<number<<") "<<b<<" * "<<a<<" = "<<c<<endl;
   }

}