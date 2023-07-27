#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

void cfg();

int main(void)
{
    string str;
    cout << "Enter the string: ";
    cin>>str;
    cfg(str);
    return 0;
}

void cfg(string str)
{

    int n=str.size();
    for(int i=0; i<n; i++)
    {
        if(str[i] == '0'|| str[i] == '1')
        {
            str[i] = 'E';
        }
    }
    int bracket = 0,flag = 1;

    for(int i = 0; i<n ;)
    {
        if(str[i] == 'E')
        {
            if(str[i+1] == '*'|| str[i+1] == '+'){

                if(str[i+2] == 'E')
                {
                    if(i+2 >= n)
                    {
                        flag = 0;
                        break;
                    }
                    i+=3;
                    continue;
                }
                else
                    {
                      flag=0;
                      break;
                    }
            }

             else if(str[i+1] == ')')
            {
                if(bracket > 0)
                {
                    bracket--;
                    i+=2;
                    str[i+1] = 'E';
                    continue;

                }
                else
                {
                    flag=0;
                    break;
                }
            }

            else if(str[i+1] == '(')
            {
                bracket++;
                i+=2;
            }
        }

        else if(str[i] == '(')
        {
            bracket++;
            i++;
            if(i == n)
                {
                  flag=0;
                  break;
                }
        }
            else if(str[i] == ')')
            {
                if(bracket > 0){
                    bracket--;
                    str[i]='E';
                    if(i==n-1)
                    {
                       i++;
                    }
                    continue;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            else
            {
                flag=0;
                break;
            }

    }
    if(bracket > 0)
    {
        flag = 0;
    }

    if(flag)
    {
        cout<<"String is accepted.\n";
    }
    else
    {
        cout<<"String is not accepted.\n";
    }
}
