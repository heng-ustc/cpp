#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char **argv)
{
    vector<int> vec;
    for(int i = 0; i != 10; ++i)
    {
        vec.push_back(i);
    }

    vec.resize(5);
    for(int i = 0; i != vec.size(); ++i)
    {
        cout<<vec[i]<<' ';
    }
    cout<<endl;

    vec.resize(8, 100);
    for(int i = 0; i != vec.size(); ++i)
    {
        cout<<vec[i]<<' ';
    }
    cout<<endl;

    vec.resize(12);
        for(int i = 0; i != vec.size(); ++i)
    {
        cout<<vec[i]<<' ';
    }
    cout<<endl;

    return 0;
}
