#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int x,y,sum;
	    cin>>x>>y;
	    sum = x+y;
	    if(sum%2==0){
	        cout<<"YES"<<endl;
	        
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
