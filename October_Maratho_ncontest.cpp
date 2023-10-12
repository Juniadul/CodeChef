#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n<3){
	    cout<<"GOLD"<<endl;
	}
	if(n>=3 &&n<6){
	    cout<<"SILVER"<<endl;
	}
	if(n>=6){
	    cout<<"BRONZE"<<endl;
	}
	return 0;
}
