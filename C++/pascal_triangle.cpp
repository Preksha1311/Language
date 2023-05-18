#include <iostream>
#include <vector>
using namespace std;

int ncr(int n, int r)
{
    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

// print a row of pascals triangle

vector<int> row(int n)
{

    long long ans = 1;

    vector<int> r;
    r.push_back(1);
    for (int i = 1; i < n; i++)
    {
        ans = ans * (n - i);
        ans = ans / i;
        r.push_back(ans);
    }
    return r;
}

void print(vector<vector <int>> r)
{
    for (int i = 0; i < r.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
          
        cout << r[i][j] << " ";
        }
        cout<<endl;
        
    }
}

vector <vector<int>> pascal (int n){
    vector<vector<int>> o;
    for(int j=0;j<n;j++){
        o.push_back(row(j));
    }
    return o;
}

int main()
{
    // cout<<ncr(7,3);
    // vector<int> r = row(5);
    // print(r);
print(pascal(8));

    return 0;
}
