#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    if(a<b){
	        cout<<"FIRST"<<endl;
	    }
	    if(a==b){
	        cout<<"ANY"<<endl;
	    }
	    if(a>b){
	        cout<<"SECOND"<<endl;
	    }
	}
	return 0;
}
