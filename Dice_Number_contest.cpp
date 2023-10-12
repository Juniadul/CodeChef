#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a1,a2,a3,b1,b2,b3;
	    cin>>a1>>a2>>a3>>b1>>b2>>b3;
	    if(a3>b2&& a3>1){
	        a3=a3;
	    }
	    if(a2<a3 && a2>a1){
	        a2=a2;
	    }
	    if(a1<a3 && a1<a2){
	        a1=a1;
	    }
	    cout<<a1<<" "<<a2<<" "<<a3;
	}
	return 0;
}
