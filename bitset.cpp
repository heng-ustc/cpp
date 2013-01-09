// bitset operators
#include <iostream>
#include <string>
#include <bitset>
#include <deque>

using namespace std;

int main ()
{
    const short ARR_DIM(8);
    short starsArray1[ARR_DIM] = {0};
    int tempDist = 5;
//    		if(tempDist > 6.66)
//			continue;
        if(tempDist > 6.23)
			starsArray1[ARR_DIM - 1]++;
		else if(tempDist > 5.77)
			starsArray1[ARR_DIM - 2]++;
		else if(tempDist > 5.27)
			starsArray1[ARR_DIM - 3]++;
		else if(tempDist > 4.71)
			starsArray1[ARR_DIM - 4]++;
		else if(tempDist > 4.07)
			starsArray1[ARR_DIM - 5]++;
		else if(tempDist > 3.33)
			starsArray1[ARR_DIM - 6]++;
		else if(tempDist > 2.35)
			starsArray1[ARR_DIM - 7]++;
		else if(tempDist > 0.0)
			starsArray1[ARR_DIM - 8]++;
for(int i = 1; i != ARR_DIM; ++i)
{
    cout<<"starsArray1[ARR_DIM - "<<i<<"] = "<<starsArray1[ARR_DIM -i]<<endl;
}


//add 1
//add 2

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
