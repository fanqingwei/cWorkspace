#include<iostream>
#include<string>
class Pig{
private :
	std::string nane;
	int age;
public:
	Pig(std::string name);
	virtual void play();

	friend class Dog;
	friend class Cat;

};
class Dog:public Pig{
public :
	void doSomething();
	virtual void play();
	Dog(std::string name);
};
class Cat:public Pig{
public :
	Cat(std::string name);
	virtual void play();
};
Pig::Pig(std::string name){
     this->nane = name;
}
Dog::Dog(std::string name):Pig(name){}
Cat::Cat(std::string name):Pig(name){}
void Dog::doSomething(){}
void Pig::play(){
	std::cout<<"我在玩...."<<std::endl;
}
void Dog::play(){
	std::cout<<this->nane<<"在玩呢..."<<std::endl;
}
void Cat::play(){
	std::cout<<this->nane<<"在玩呢...."<<std::endl;
}
int main(){
	Pig * p = new Dog("小白");
	Pig * p1 = new Cat("小花");
	Pig & p2 = *p;
	Pig & p3 = *p1;
	Dog d("小狗");
	p->play();
	p1->play();
	p2.play();
	p3.play();
	Pig p5("小猪");
	p5.play();
	return 0;
}