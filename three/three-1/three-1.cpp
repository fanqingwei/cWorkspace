#include<iostream>
using namespace std;
union mima{
   unsigned long birthday;
   unsigned short pet;
   char * name;
};
typedef struct{
	char* name;
    int age;
}P,* Pp;
int main(){
	/**
    mima mi;
	mi.birthday = 19930912;
	cout<<mi.birthday<<"\n";
	mi.name = "范庆伟";
	cout<<mi.name<<"+"<<mi.birthday<<"\n";
	return 0;
	*/
	enum weekdays{Monday,Thusday,wednesday,Thursday,Friday,Starday,Sunday};
	weekdays today =  Thusday;
	cout<<today<<endl;
	P person;
	//Pp person;这里创建了一个无指向的指针,很危险.
	Pp per = &person;
	per->age = 456;
	per->name = "范庆伟";
	cout<<per->age<<"+"<<per->name<<endl;
	return 0;
}