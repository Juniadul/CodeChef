#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    if(a<4){
	        cout<<"MILD"<<endl;
	    }
	    if(a>=4 && a<7){
	        cout<<"MEDIUM"<<endl;
	    }
	    if(a>=7){
	        cout<<"HOT"<<endl;
	    }
	}
	return 0;
}
