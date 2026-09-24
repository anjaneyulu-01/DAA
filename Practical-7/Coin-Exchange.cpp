#include <iostream>
#include <vector>
using namespace std;

int countCombinations(vector<int>& coins, int amount){
    vector<int> dp(amount + 1, 0);

    dp[0] = 1;

    for (int coin : coins)
    {
        for (int j = coin; j <= amount; j++)
        {
            dp[j] += dp[j - coin];
        }
    }

    return dp[amount];
}

int main(){
    int n;

    cout << "Enter number of coin types: ";
    cin >> n;

    vector<int> coins(n);

    cout << "Enter coin values: ";
    for (int i = 0; i < n; i++){
        cin >> coins[i];
    }

    int amount;

    cout << "Enter target amount: ";
    cin >> amount;

    int combinations = countCombinations(coins, amount);

    cout << "Total Number of Combinations = "
         << combinations << endl;

    return 0;
}