#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    if(a<=3){
	        cout<<"BRONZE"<<endl;
	    }
	     if(a>3 && a<=6){
	        cout<<"SILVER"<<endl;
	    }
	     if(a>6){
	        cout<<"GOLD"<<endl;
	    }
	}
	return 0;
}
