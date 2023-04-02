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
		void displaynumber(){
			cout<<"the number is: "<<a<<endl;
		}	
		
};
int main(){
	 number x,y,z(4);
	 x.displaynumber();
	 y.displaynumber();
	 z.displaynumber();
	 
	 
	 return 0;
}






