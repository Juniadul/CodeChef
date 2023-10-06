#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int a,b;
	    cin>>a>>b;
	    if(a*3<b*2){
	        cout<<a*3<<endl;
	    }
	    else{
	        cout<<b*2<<endl;
	    }
	}
	return 0;
}
