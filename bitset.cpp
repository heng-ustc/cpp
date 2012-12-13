// bitset operators
#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main ()
{
    unsigned char b1 = 0x12;
    unsigned char b2 = 0x32;
    unsigned char res = b1 | b2;
    cout<<bitset<8>(b1)<<endl;
    cout<<bitset<8>(b2)<<endl;
    cout<<bitset<8>(res)<<endl;
    cout<<true<<' '<<false<<endl;
    cout<<boolalpha
        <<true<<'\t'<<false<<endl;
    cout<<noboolalpha
        <<true<<'\t'<<false<<endl;

    cout<<sizeof(char)<<' '<<sizeof(int)<<' '
        <<sizeof(float)<<' '<<sizeof(signed)<<' '
        <<sizeof(double)<<' '<<sizeof(vector)<<' ';

//  bitset<4> first  (string("1001"));
//  bitset<4> second (string("0011"));        // second keeps 0011.
//
//  cout << (first^=second) << endl;          // 1010 (XOR,assign)
//  cout << (first&=second) << endl;          // 0010 (AND,assign)
//  cout << (first|=second) << endl;          // 0011 (OR,assign)
//
//  cout << (first<<=2) << endl;              // 1100 (SHL,assign)
//  cout << (first>>=1) << endl;              // 0110 (SHR,assign), first = 0110 now
//
//  cout << (~second) << endl;                // 1100 (NOT)
//  cout << (second<<1) << endl;              // 0110 (SHL)
//  cout << (second>>1) << endl;              // 0001 (SHR)
//
//  cout << (first==second) << endl;          // false (0110==0011)
//  cout << (first!=second) << endl;          // true  (0110!=0011)
//
////   cout<<first<<second<<endl;
//
//  cout << (first&second) << endl;           // 0010
//  cout << (first|second) << endl;           // 0111
//  cout << (first^second) << endl;           // 0101

  return 0;
}
