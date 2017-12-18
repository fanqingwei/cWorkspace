#include<iostream>
#include<string>
class Complex{
public :
	int rel;
	int img;
	Complex(int rel,int img);
	Complex();
	Complex operator+(Complex * c);
	Complex operator++();
	void Print();
};
Complex::Complex():rel(0),img(0){}
Complex::Complex(int rel,int img):rel(rel),img(img){}
void Complex::Print(){
	std::cout<<"("<<this->rel<<","<<this->img<<"i)"<<std::endl;
}
Complex Complex::operator + (Complex * c){
	Complex c2;
    c2.rel = this->rel+c->rel;
	c2.img = this->img + c->img;
	return c2;
}
Complex Complex::operator ++(){
	Complex c2;
    c2.rel = this->rel + 1;
	c2.img = this->img + 1;
	return c2;
}
int main(){
   Complex c(2,3);
   Complex c1(4,5);
   c = c++;
   c.Print();
   return 0;
}