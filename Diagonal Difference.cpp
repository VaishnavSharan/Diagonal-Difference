
#include <iostream>
#include<vector>
using namespace std;


def diagonalDifference(arr):
    a=0
    b=0
    for i in range(0,len(arr)):
        a=a+arr[i][i]
        
    for j in range(0,len(arr)):
        b=b+arr[j][len(arr)-1-j]
        
    return abs(a-b)