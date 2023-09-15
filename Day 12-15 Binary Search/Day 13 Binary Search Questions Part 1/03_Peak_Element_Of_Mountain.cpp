
#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        { // checking if it is in increment(a) side of mountain then to toward peak
            start = mid + 1;
        }
        else
        {              // mid can be at peak or at decremental side
            end = mid; // not mid - 1 because mid can be peak
        }

        mid = start + (end - start) / 2; //
    }

    return start;
}

int main()
{
    vector<int> myVector = {0, 10, 5, 2};

    int ans = peakIndexInMountainArray(myVector);
    cout << ans;

    return 0;
}

//     peak
//       /\
//   a  /  \  b
//     /    \


// explaination =
// [0,2,1,0]
// initially mid =  (0 + (3-0)/2) = 1

// in while loop (0 < 4) true
// if(2 < 1) ( arr[1] < arr[1 + 1]) false
// else end = 1

// mid = 0 + (1-0)/ 2 = 0
// in while loop start < end ( 0 < 1) true
// if (0 < 1) (arr[0(mid)] < arr[0+1(mid + 1)]) true
// start = 0 + 1; = 1

// mid = 1 + (1 + 1)/2
// mid = 1
// in while loop (1 < 1) false
// it will return start
