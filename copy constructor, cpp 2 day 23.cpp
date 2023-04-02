#include<iostream>
using namespace std;
class number{
	int a;
	public:
		number(){
			a = 0;
		}
		number(int num){
			a = num;
		}
		
		/*number(number &obj){
			cout<<"copy constructor is here!!!!"<<endl;
			a = obj.a;
		}*/
		
		void displaynumber(){
			cout<<"the number is: "<<a<<endl;
		}	
		
};
int main(){
	 number x,y,z(4);
	 x.displaynumber();
	 y.displaynumber();
	 z.displaynumber();
	 number z1(z);
	 z1.displaynumber();
	 //z1 should resemble any of y,z,x,
	 
	 return 0;
}
