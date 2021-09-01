#include <bits/stdc++.h>
using namespace std;

string s1, s2;

string WhoWon(string action1, string action2)
{
    if (action1 == action2)
        return "Tie";
    if ((action1 == "Rock" && action2 == "Scissors") ||
        (action1 == "Scissors" && action2 == "Paper") ||
        (action1 == "Paper" && action2 == "Rock"))
        return "Player1";
    else
        return "Player2";
}

int main()
{
    int n = 0, i = 0;
    cin >> n ;
    while (n--)
    {
        cin >> s1 >> s2;
        cout << WhoWon(s1, s2) << endl;
    }
    return 0;
}