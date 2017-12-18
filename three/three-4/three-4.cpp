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
	std::cout<<"进入基类构造器"<<std::endl;
}
BaseClass::~BaseClass(){
	std::cout<<"进入基类析构器"<<std::endl;
}
void BaseClass::doSomeThing(){
	std::cout<<"我干了某些事"<<std::endl;
}
SubClas::SubClas(){
	std::cout<<"进入子类构造器"<<std::endl;
}
SubClas::~SubClas(){
	std::cout<<"进入子类析构器"<<std::endl;
}
int main(){
	SubClas subClass;
	subClass.doSomeThing();
    return 0;
}