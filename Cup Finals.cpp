#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(abs(a-b)<=c){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
