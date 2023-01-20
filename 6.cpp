#include<bits/stdc++.h>
using namespace std;

template <class t>
t sumA(t *a,int n)
{
    t sum=0;

    for(int i=0;i<n;i++)
    sum+=a[i];

    return sum;

}

int main()
{
    int a[]={1,2,4,6,9};
    float b[]={3.3,5.6,4.8};

    cout<<"sum : "<<sumA(a,5)<<endl;
    cout<<"sum : "<<sumA(b,3)<<endl;

    return 0;

}