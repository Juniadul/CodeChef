#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int a,b,c;
	    cin>>a>>b;
	    c=a/b;
	    if(c>20){
	        cout<<"20"<<endl;
	    }
	    else{
	    cout<<c<<endl;
	}
	}
	return 0;
}
