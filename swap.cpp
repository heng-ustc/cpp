#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char **argv)
{
    vector<int> foo(3, 100), bar(5, 200);

    foo.swap(bar);
    for(unsigned i = 0; i != foo.size(); ++i) cout<<foo[i]<<' ';
    cout<<endl;

    for(unsigned i = 0; i != bar.size(); ++i) cout<<bar[i]<<' ';
    cout<<endl;


    return 0;
}
