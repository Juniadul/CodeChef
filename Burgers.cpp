#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int x,y;
	    cin>>x>>y;
	    if(x>y){
	        cout<<y<<endl;
	    }
	    else {
	        cout<<x<<endl;
	    }
	}
	return 0;
}
