#include<iostream>
using namespace std;
int main(){
   //华氏温度=摄氏温度*9/5+32;
	const unsigned ADD_SUBTRACT = 32;
	const double RATIO = 9.0/5.0;
	double tempin,tempout;
	char typein,typeout;
	cout<<"请输入一个温度(xx.x c xx.x f):"<<endl;
	cin>>tempin>>typein;
	cin.ignore(100,'\n');
	cout<<endl;
	switch(typein){
	   case 'c':
	   case 'C':
		   tempout = tempin*RATIO+ADD_SUBTRACT;
		   typein = 'C';
		   typeout = 'F';
		   break;
	   case 'f':
	   case 'F':
		   tempout = (tempin-ADD_SUBTRACT)/RATIO;
		   typein = 'F';
		   typeout = 'C';
		   break;
	   default:
		   typeout = 'E';
		   break;
	}
	if(typeout!='E'){
	    cout<<tempin<<typein<<"="<<tempout<<typeout<<endl;
	}else{
	    cout<<"输入错误";
	}
	return 0;
}