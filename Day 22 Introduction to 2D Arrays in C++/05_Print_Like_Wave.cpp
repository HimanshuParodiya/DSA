#include <iostream>
#include <vector>
using namespace std;

void waveLikeSum(int arr[][4], int nRow, int mCol)
{
    vector<int> ans;
    for (int col = 0; col < mCol; col++)
    {
        if (col & 1)
        {
            for (int row = nRow - 1; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            for (int row = 0; row < nRow; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int arr[3][4];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    // print 2D array

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    waveLikeSum(arr, 3, 4);

    return 0;
}

// wave print look like this
// PRINTING ELEMENT OF 2D ARRAY LIKE SNACK
//        ____
// |     |     |
// |     |     |
// |     |     |
// |     |     |
// |     |     |
// |_____|     |

// 1 2 3 4 5 6 7 8 9 10 11 12