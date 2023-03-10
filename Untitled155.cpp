#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    getc(stdin);

    while (n--)
    {
        stack<char> checker;
        char s[140];
        gets(s);

        int len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '(' || s[i] == '[')
            {
                checker.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (checker.empty() || checker.top() != '(')
                {
                    checker.push('a');
                    break;
                }
                checker.pop();
            }
            else if (s[i] == ']')
            {
                if (checker.empty() || checker.top() != '[')
                {
                    checker.push('a');
                    break;
                }
                checker.pop();
            }
        }

        if(checker.empty())cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
