#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int x;
	    cin>>x;
	    if(x>70 && x <= 100){
	        cout<<"500"<<endl;
	    }
	    else if(x>100){
	        cout<<"2000"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
