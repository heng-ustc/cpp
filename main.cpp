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
    vector<int> vec;
    vec.push_back(10);
    while(vec.back() != 0)
    {
        vec.push_back(vec.back() - 1);
    }

    cout<<"myvec is:"<<endl;
    while(vec.end() != vec.begin())
    {
        cout<<*(vec.end()-1)<<" ";
        vec.pop_back();
    }

    return 0;
}
