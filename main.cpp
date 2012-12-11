#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
//    vector<int> first, second, third;
//    first.assign(7, 100);
//
//    vector<int>::iterator it;
//    it = first.begin() + 1;
//    second.assign(it, first.end() - 1);
//
//    int myints[] = {1,2, 3, 5};
//    third.assign(myints, myints + 3);
//
//    cout<<"size of first: "<<int (first.size())<<"\n";
//    cout<<"size of second: "<<int (second.size())<<'\n';
//    cout<<"size of third: "<<int (third.size())<<'\n';
//
//    for(it = first.begin(); it != first.end(); ++it)
//    {
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//
//    for(it = second.begin(); it != second.end()-1; ++it)
//    {
//        cout<<*it<<" ";
//    }
//
//    cout<<endl;
//
//    for(it = third.begin(); it != third.end(); ++it)
//    {
//        cout<<*it<<" ";
//    }
//
// //vec.back
//
//    vector<int> vec;
//    vec.push_back(10);
//    while(vec.back() != 0)
//    {
//        vec.push_back(vec.back() - 1);
//    }
//
//    cout<<"myvec is:"<<endl;
//    while(vec.end() != vec.begin())
//    {
//        cout<<*(vec.end()-1)<<" ";
//        vec.pop_back();
//    }


//vec reverse

    vector<int> vec(10);
    vector<int>::size_type sz = vec.size();

    for(unsigned i = 0; i < sz; ++i) vec[i] = i;

    for(unsigned i = 0; i < sz/2; ++i)
    {
        int temp;
        temp = vec[i];
        vec[i] = vec[sz-1-i];
        vec[sz-1-i] = temp;
    }

    cout<<"vec contains: ";
    for(unsigned i = 0; i < sz; ++i)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    return 0;
}
