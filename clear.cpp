#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv)
{
    vector<int> vec;

    for(int i = 0; i < 10; ++i)
    {
        vec.push_back(i);
    }

    vec.erase(vec.begin() + 5);
    vec.erase(vec.begin() + 5);
    vec.erase(vec.begin(), vec.begin() + 3);

    for(unsigned i = 0; i != vec.size(); ++i)
    {
        cout<<vec[i]<<" ";
    }

    cout<<endl;

    return 0;

}
