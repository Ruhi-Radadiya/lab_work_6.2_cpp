#include<iostream>

using namespace std;

class A{
	int a,b;	
	public :
		input()
		{
			cout<<"Enter input:";
			cin>>a;
    	}
		A operator < (A x){
			if(a<x.a){
				cout<<"Second object is large :"<<x.a;		
			}else{
				cout<<"First object is large :"<<a;
			}
		}
};
int main(){
    A a;
    A b;
    A c;
    a.input();
    b.input();
    c=a<b;
}