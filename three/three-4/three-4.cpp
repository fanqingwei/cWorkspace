#include<iostream>
#include<string>
class BaseClass{
public:
	BaseClass();
	~BaseClass();
	void doSomeThing();
};
class SubClas:public BaseClass{
public:
	SubClas();
	~SubClas();
};
BaseClass::BaseClass(){
	std::cout<<"������๹����"<<std::endl;
}
BaseClass::~BaseClass(){
	std::cout<<"�������������"<<std::endl;
}
void BaseClass::doSomeThing(){
	std::cout<<"�Ҹ���ĳЩ��"<<std::endl;
}
SubClas::SubClas(){
	std::cout<<"�������๹����"<<std::endl;
}
SubClas::~SubClas(){
	std::cout<<"��������������"<<std::endl;
}
int main(){
	SubClas subClass;
	subClass.doSomeThing();
    return 0;
}