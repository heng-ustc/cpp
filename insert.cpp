#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv)
{
    vector<int> vec(3, 100);
    vector<int>::iterator it;

    it = vec.begin();
    it = vec.insert(it, 200);

    vec.insert(it, 2, 300);

    it = vec.begin();

    vector<int> vec2(2, 400);
    vec.insert(it+2, vec2.begin(), vec2.end());

    int myarray[] = {501, 502, 503};
    vec.insert(vec.begin(), myarray, myarray+3);

    for(it = vec.begin(); it != vec.end(); ++it)
    cout<<*it<<" ";
    cout<<endl;

    return 0;
}

