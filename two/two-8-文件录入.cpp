#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Person{
	std::string name;
    int age;
};
int get();
int init();
int main(){
	cout<<"输入1显示所有信息."<<endl;
	cout<<"输入2新建一条信息."<<endl;
	init();
	//get();
	int  a;
	cin>>a;
	switch(a){
	   case 1:
	   case 2:
		   break;
	   default:
		   break;
	}

   return 0;
}
int init(){
	fstream f("info.txt",ios::out|ios::app);
	Person p;
    p.age = 25;
    p.name = "范庆伟";
	f<<p.age<<p.name<<endl;
	f.close();
	return 1;
}
int get(){
	fstream f("info.txt",ios::in);
   char c[100];
   while(!f.eof()){
      cout<<(f>>c)<<endl;
   }
   return 1;
}