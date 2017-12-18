#include<fstream>
#include<iostream>
using namespace std;
int main(){
	/**ofstream out;
	out.open("test.txt");
	if(!out){
	  cerr<<"打开文件失败"<<endl;
	  return 0;
	}
	int i;
	for(i=0;i<9;i++){
	   out<<i;
	}
	out.close();

	fstream out("test.txt",ios::out|ios::in);
	if(!out){
	   cerr<<"文件打开失败"<<endl;
	   return 0;
	}
	int i;
	for(i=10;i<30;i++){
	   out<<i;
	}
	out<<"我是大神";
	static char str[100];
	out.seekg(ios::beg);
	out>>str;
	cout<<str<<endl;
	out.close();
		*/
	fstream f1("test.txt",ios::in);
	fstream f2("testcopy.txt",ios::out);
	char c[100];
	f1>>c;
	f2<<c;
	f1.close();
	f2.close();
	return 0;
}