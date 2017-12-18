#include<iostream>
#include<string>
#include<stdlib.h>
class Rational{
private :
	int numerator;
	int denominator;
public :
	Rational(int numerator,int denominator);
	friend std::ostream& operator <<(std::ostream & o,Rational * r);
	Rational operator + (Rational * r);
	Rational operator - (Rational * r);
	Rational operator * (Rational * r);
	Rational operator / (Rational * r);
	void print();
	void normalize();
};
std::ostream& operator <<(std::ostream & o,Rational * r);
Rational::Rational(int numerator,int denominator):numerator(numerator),denominator(denominator){}
void Rational::normalize(){
    if(denominator < 0){
	     numerator = -numerator;
		 denominator = -denominator;
	}
	int a = abs(numerator);
	int b = abs(denominator);
	while( b > 0){
	   int t = a%b;
	   a = b;
	   b = t;
	}
	numerator /= a;
	denominator /= a;
}
void Rational::print(){
	std::cout<<numerator<<"/"<<denominator<<std::endl;
}
Rational Rational::operator + (Rational * r){
	  numerator = (numerator * r->denominator) + (r->numerator * denominator);
	  denominator = denominator * r->denominator;
	  normalize();
	  return Rational(numerator,denominator);
}
Rational Rational::operator - (Rational * r){
    r->numerator = -(r->numerator);
	r->denominator = -(r->denominator);
	return Rational::operator + (r);
}
Rational Rational::operator * (Rational * r){
   numerator *= r->numerator;
   denominator *= r->denominator;
   normalize();
   return Rational(numerator,denominator);
}
Rational Rational::operator /(Rational * r){
   int a = r->numerator;
   r->numerator = r->denominator;
   r->denominator = a;
   return Rational::operator *(r);
}
int main(){
	Rational r(2,10);
	r.normalize();
	r.print();
	Rational r1(3,7);
	r1.print();
	Rational r2(3,7);
	std::cout<<&r<<"+"<<&r1<<"="<<&(r+&r1)<<std::endl;
	return 0;
}
std::ostream& operator <<(std::ostream & o,Rational * r){
     o<<r->numerator<<"/"<<r->denominator;
	 return o;
}