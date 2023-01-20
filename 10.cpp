#include<bits/stdc++.h>
using namespace std;

#define size 30

template <class t>
class hashtable{

    int key[size];
    t value[size];

    public:
    
    hashtable()
    {
    for(int i=0;i<size;i++)
    key[i]=-1;
    }

    void insert(int a,t b)
    {
        int temp=a%size;
        key[temp]=a;
        value[temp]=b;
    }

    void print()
    {
        for(int i=0;i<size;i++)
        {
            if(key[i]!=-1)
                cout<<key[i]<<"  "<<value[i]<<endl;
        }
    }
};

int main()
{
    hashtable<int> h;
    h.insert(3,50);
    h.insert(45,0);
    h.insert(34,9);

    h.print();

    return 0;
}