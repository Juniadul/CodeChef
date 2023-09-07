#include <iostream>
using namespace std;

int main() {
int x;
cin>>x;
while(x--){
    int a;
    cin>>a;
    if(a<=100){
        cout<<a<<endl;
    }
    else{
        cout<<a-10<<endl;
    }
}
	return 0;
}
