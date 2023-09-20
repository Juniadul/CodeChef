#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    a = a*4;
	    if(a<=1000){
	        cout<<"YES"<<endl;
	       
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
