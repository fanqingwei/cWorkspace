#include<iostream>
#include<string>
class Car{
   public:
	   std::string color;
	   std::string engine;
	   float gas_tank;
	   unsigned int wheel;
	  
	   void fill_tank(float liter);
	   void runing();
};
void Car::fill_tank(float liter){
   gas_tank += liter;
}
void Car::runing(){
	 this->color = "WHITE";
}
int main(){
	Car car;
	car.runing();
	std::cout<<car.color<<std::endl;
	std::string str;
	std::getline(std::cin,str);
	std::cout<<str<<std::endl;
    return 0;
}