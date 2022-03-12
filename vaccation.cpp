#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // accept n, vector of n elements

    int n;
     cin >> n;
    vector<int> v;
     for (int i = 0; i < n; i++)
     {
         cin >> v[i];
     }
    int sum1=0, sum2=0, sum1Turn = true;
    int start = 0, end = n - 1;
    while (start <= end)
    {
        if (v[start] >= v[end] && sum1Turn)
        {
            cout << v[start] << "a ";
            sum1 += v[start];
            start++;
            sum1Turn = v[start] > 0 ? sum1Turn : !sum1Turn;
        }
        else if (v[start] >= v[end] && !sum1Turn)
        {
            cout << v[start] << "b ";
            sum2 += v[start];
            start++;
            sum1Turn = v[start] > 0 ? sum1Turn : !sum1Turn;
        }
        else if (v[start] < v[end] && sum1Turn)
        {
            cout << v[end] << "c ";
            sum1 += v[end];
            end--;
            sum1Turn = v[end] > 0 ? sum1Turn : !sum1Turn;
        }
        else if (v[start] < v[end] && !sum1Turn)
        {
            cout << v[end] << "d ";
            sum2 += v[end];
            end--;
            sum1Turn = v[end] > 0 ? sum1Turn : !sum1Turn;
        }
    }
    cout << abs(sum1 - sum2);
    return 0;
}
