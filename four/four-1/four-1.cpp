#include<iostream>
#include<string>

class Lovers{
private :
	std::string name;
public:
	void set(std::string name);
	friend class others;
};
class others{
public:
	void runing(Lovers * l);
};

class girFriend:public Lovers{
private :
	girFriend(std::string name);
};
class boyFriend:public Lovers{
private:
	boyFriend(std::string name);
};
void Lovers::set(std::string name){
     this->name = name;
}
void others::runing(Lovers * l){
	std::cout<<l->name<<std::endl;
}
int main(){
	Lovers l;
	l.set("·¶ÇìÎ°");
	others o;
	o.runing(&l);
   return 0;
}