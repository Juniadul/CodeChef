#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int b;
        cin>>b;
        if(b<=300){
            b=300;
        }
        cout<<10*b<<endl;
    }
	return 0;
}
