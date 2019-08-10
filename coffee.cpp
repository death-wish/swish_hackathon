#include <cmath>
#include <iostream>
using namespace std;

int calc(int x, int p){
    int t=x;
    while(x>0){
        x=floor(((100-p)/100.0)*x);
        t+=x;
    }
    return t;
}

int main() {
    int x,p;
    cin>>x>>p;
    cout<<calc(x,p);
    return 0;
}
