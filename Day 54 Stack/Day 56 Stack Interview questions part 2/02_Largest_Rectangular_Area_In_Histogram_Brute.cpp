#include <iostream>
#include <vector>
using namespace std;

int checkRight(vector<int> &heights, int currentHeight, int restIndices)
{
    int count = 1;
    for (int i = restIndices; i < heights.size(); i++)
    {
        if (currentHeight > heights[i])
        {
            return count;
        }
        else
        {
            count++;
        }
    }

    return count;
}

int checkLeft(vector<int> &heights, int currentHeight, int restIndices)
{
    int count = 1;
    for (int i = restIndices; i >= 0; i--)
    {
        if (currentHeight > heights[i])
        {
            return count;
        }
        else
        {
            count++;
        }
    }

    return count;
}

int findMaxArea(vector<int> &heights)
{
    int area = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        int breath = 0;

        if (i == 0)
        {
            breath = checkRight(heights, heights[i], i + 1);
        }
        else if (i == heights.size() - 1)
        {
            breath = checkLeft(heights, heights[i], i - 1);
        }
        else
        {
            int rightBreath = checkRight(heights, heights[i], i + 1);
            int leftBreath = checkLeft(heights, heights[i], i - 1);
            breath = rightBreath + leftBreath - 1; // Deduct 1 to avoid double counting the current height
        }

        cout << "Total breath for " << heights[i] << " is " << breath << endl;

        // find area
        int newArea = heights[i] * breath;

        cout << "New area for " << heights[i] << " * " << breath << " is " << newArea << endl;

        if (area < newArea)
        {
            area = newArea;
            cout << "Max Area is " << area << endl;
        }
    }

    return area;
}

int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    int ans = findMaxArea(heights);

    cout << ans;

    return 0;
}

// time complexity is O(n2)
// space complexity is O(1)

// #include <iostream>
// #include <vector>
// using namespace std;

// int checkRight(vector<int> &heights, int currentHeight, int restIndices)
// {
//     int count = 1;
//     for (int i = restIndices; i < heights.size(); i++)
//     {
//         if (currentHeight > heights[i])
//         {
//             return count;
//         }
//         else
//         {
//             count++;
//         }
//     }

//     return count;
// }

// int checkLeft(vector<int> &heights, int currentHeight, int restIndices)
// {
//     int count = 1;
//     for (int i = restIndices; i > 0; i--)
//     {
//         if (currentHeight > heights[i])
//         {
//             return count;
//         }
//         else
//         {
//             count++;
//         }
//     }

//     return count;
// }

// int findMaxArea(vector<int> &heights)
// {
//     int area = 0;
//     for (int i = 0; i < heights.size(); i++)
//     {
//         int breath = 0;
//         if (i == 0)
//         {
//             breath = checkRight(heights, heights[i], i + 1);
//         }
//         if (i == heights.size() - 1)
//         {
//             breath = checkLeft(heights, heights[i], i - 1);
//         }

//         int right = checkRight(heights, heights[i], i + 1);
//         // check for left and right side
//         int left = checkLeft(heights, heights[i], i - 1);
//         // find area

//         breath = right + left - 1;

//         cout << "New breath are " << breath << endl;
//         int newArea = heights[i] * breath;
//         cout << "New area is " << newArea << endl;

//         if (area < newArea)
//         {
//             area = newArea;
//         }
//     }

//     return area;
// }

// int main()
// {
//     vector<int> heights = {2, 1, 5, 6, 2, 3};

//     int ans = findMaxArea(heights);

//     cout << ans;

//     return 0;
// }