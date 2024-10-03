
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;



int main(){
char percent [1];
float IR, IRp, TC, P, I, A;
cout << "Investment Rate:" << setw(10) << left << "";
cin>> IR >> percent;
IRp = IR*.01;
cout << "Times Compounded: " <<setw(10)<<""; //TC
cin>> TC;
cout<<"Principal:" << setw(13) << right << "$"; //P
cin>> P;
A = P*(pow(1 + (IRp/TC), TC));
I=A-P;
cout<<"Interest: " <<setw(15)<<"$  " <<fixed<<setprecision(2)<<I<<endl;
cout<< "Amount in Savings:" <<setw(5)<<"$"<<fixed<<setprecision(2)<<A<<endl;


}

  