#include<iostream>
using namespace std;
int count = 0;
class num{
	public:
		int count =0;
		num(){
			count++;
			cout<<"constructor is called"<<count<<endl;
		}
		~num(){
			count--;
			cout<<"destructor is called"<<count<<endl;
		}
};
int main(){
	cout<<"we are in the main function"<<endl;
     cout<<"first number is called n1"<<endl;
	num n1;
	{
		cout<<"entering the block"<<endl;
		cout<<"creating two more numbers n2 and n3"<<endl;
		num n2,n3;
		cout<<"exiting this block"<<endl;
		
	}
	cout<<"returning to main function"<<endl;
	return 0;
	
}








