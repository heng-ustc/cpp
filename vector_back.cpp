#include<iostream>
#include<vector>
using namespace std;

int main(int charc, char** charv)
{
    vector<int> vec;
    for(int i = 0; i != 10; ++i)
    {
        vec.push_back(i);
    }

    cout<<"sizeof vec is: "<<vec.size()<<'\n';
//    cout<<"capacity is: "<<vec.capacity()<<'\n';
    cout<<"max_size: "<<vec.max_size()<<endl;

    return 0;
}
