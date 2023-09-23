#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    e= a*2+b;
    f=c*2+d;
    if(e==f){
        cout<<"Equal"<<endl;
    }
    if(e>f){
        cout<<"Messi"<<endl;
    }
    if(e<f){
        cout<<"Ronaldo"<<endl;
    }
	return 0;
}
