#include<bits/stdc++.h>
using namespace std;
#define f(x) pow(x,3)-2*x-5
#define df(x) 3*x*x-2
int main(){
    float x0,x1,f0,f1,df0;
    float e=0.001;
    int i=0;
    cout<<"Enter the value of x0:";
    cin>>x0;
    do{
        f0=f(x0);
        df0=df(x0);
        x1=x0-(f0/df0);
        f1=f(x1);
        x0=x1;
        i++;
        cout<<"No of iteration"<<" "<<i <<endl;
        cout<<"Root"<<" "<<x1<<endl;
        cout<<"Value of function"<<" "<<f1<<endl;
    }
    while(fabs(f1)>e);
    return 0;

}
