#include<bits/stdc++.h>

using namespace std;

template <class t>
void swap(t *a,t *b)
{
    t temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int i1=1,i2=3;
    float f1=9.5,f2=5.5;
    string s1="satyam",s2="shantanu";

    cout<<"Before Swapping :  "<<endl;
    cout<<"i1="<<i1<<" i2="<<i2<<endl;
    cout<<"f1="<<f1<<" f2="<<f2<<endl;
    cout<<"s1="<<s1<<" s2="<<s2<<endl;
    swap(&i1,&i2);
    swap(&f1,&f2);
    swap(&s1,&s2);
    cout<<"after Swapping :  "<<endl;
    cout<<"i1="<<i1<<" i2="<<i2<<endl;
    cout<<"f1="<<f1<<" f2="<<f2<<endl;
    cout<<"s1="<<s1<<" s2="<<s2<<endl;


    return 0;


}