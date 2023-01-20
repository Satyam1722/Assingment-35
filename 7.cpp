#include<bits/stdc++.h>
using namespace std;

class test{
    int n;
    public:
    test(){n=5;}
    void printt()
    {
        for(int i=0;i<n;i++)
        cout<<"i-> "<<i<<endl;
    }

};

template <class t>
class testd :public test
{
    t n;
    public:
    void get()
    {
        cin>>n;
    }
    void print()
    {
        printt();
        cout<<"n->"<<n<<endl;
    }
};

int main()
{
    testd <string>t;
    t.get();
    t.print();

    return 0;

}