#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    int i = 1;
    while (i <= num)
    {
        int j = num;
        while (j>=1)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
        

    }



    // i can also do like this 
    
    // while (i <= num)
    // {
    //     int j = 1;

    //     while (j<=num)
    //     {
    //         cout<<num-j+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
        
    // }
    
    

    return 0;
}