#include <iostream>
#include <vector>
using namespace std;

void findCombination(int index, vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &subSets)
{
    if (index == candidates.size())
    { // check for base case
        if (target == 0)
        {                           // does target become 0
            ans.push_back(subSets); // yess then put it in our ans
        }
        return; // and return it
    }

    // Pick up element
    if (candidates[index] <= target)
    {                                                                                 // element should be smaller than target (we can't pick 9 from candidate array when target is 5)
        subSets.push_back(candidates[index]);                                         // Add that element to my subset
        findCombination(index, candidates, target - candidates[index], ans, subSets); // check with picking the same element
        subSets.pop_back();                                                           // when above function will return its value then this will remove the recently added element
    }
    // Non-Pick up element
    findCombination(index + 1, candidates, target, ans, subSets);
}

int main()
{

    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> ans;
    vector<int> subSets;
    int index = 0;
    findCombination(index, candidates, target, ans, subSets);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << "{";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << " " << ans[i][j] << " ";
        }
        cout << "}";
        cout << endl;
    }

    return 0;
}