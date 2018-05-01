//determine power without using pow()*//
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the number"<<endl;
    cin>>x>>y;
    int res = 1;
    for(int i = 0;i<y;i++){
        res*=x;
    }
    cout<<res<<endl;
    return 0;
}
