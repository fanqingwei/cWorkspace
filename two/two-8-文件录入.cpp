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
	cout<<"����1��ʾ������Ϣ."<<endl;
	cout<<"����2�½�һ����Ϣ."<<endl;
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
    p.name = "����ΰ";
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