#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a<b){
            cout<<"REPAIR"<<endl;
        }
        else if(a>b){
            cout<<"NEW PHONE"<<endl;
        }
        else{
            cout<<"ANY"<<endl;
        }
    }
	return 0;
}
