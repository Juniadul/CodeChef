#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	while(x--){
	    int a;
	    cin>>a;
	    if(a>=67 && a<=45000){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
