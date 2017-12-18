#include<iostream>
using namespace std;
double call(double a);
double call(double a,double b);
double call(double a,double b,double c);
int main(){
	int a[3];
}
double call(double a){
    return a*a;
}
double call(double a,double b){
    return a*b;
}
double call(double a,double b,double c){
    return a+b+c;
}