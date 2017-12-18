#include<iostream>
#include<string>
class Animal{
public:
	std::string name;
	std::string mouth;
	Animal(std::string name);
	Animal();
	void eat();
	void sleep();
	void drool();
};
class Pig:public Animal{
public:
	void climb();
	Pig(std::string name);
};
class Turtle:public Animal{
public:
	Turtle(std::string name);
	void swim();
};
Pig::Pig(std::string name): Animal(name){
}
Turtle::Turtle(std::string name):Animal(name){
}
Animal::Animal(std::string name){
   this->name = name;
}
void Animal::eat(){
	std::cout<<"T'm eating....."<<std::endl;
}
void Animal::sleep(){
	std::cout<<"T'm sleeping....."<<std::endl;
}
void Animal::drool(){
	std::cout<<"T'm drooling....."<<std::endl;
}
void Pig::climb(){
	std::cout<<"I'm is a beautiful pig,I can climb,I'm clibing....."<<std::endl;
}
void Turtle::swim(){
	std::cout<<"我是一只小甲鱼,当母猪想抓我的时候,我就游到海里....."<<std::endl;
}
int main(){
   Pig pig("小甲鱼");
   Turtle turtle("小狗");
   pig.eat();
   turtle.swim();
   std::cout<<pig.name<<std::endl;
   return 0;
}