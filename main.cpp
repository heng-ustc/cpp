#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
    vector<int> vec(100);

    for(unsigned i = 0; i < vec.size(); ++i)
    {
        vec[i] = i;
    }

    cout<<"vec[10] = "<<vec[10]<<endl;
    cout<<"size of vec is: "<<vec.size()<<endl;
    vector<int>::iterator it = vec.begin() + 10;
    vec.erase(it);
    cout<<"vec[10] = "<<vec[10]<<endl;
    cout<<"size of vec is: "<<vec.size()<<endl;

    return 0;
}
