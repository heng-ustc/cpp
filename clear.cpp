#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv)
{
    vector<int> vec;

    for(int i=0; i < 10; ++i)
    {
        vec.at(i) = i;
    }

//    vector<int>::iterator
    for(auto it = vec.cbegin(); it != vec.cend(); ++it)
    {
        cout<<*it<<" ";
    }

    return 0;

}
