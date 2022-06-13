#include<bits/stdc++.h> 
using namespace std;

int main(){
    string str = "abc def4 5$";
    int count_digit = 0, count_character = 0, count_space = 0;

    int i = 0;
    while(str[i] != '$')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            count_character ++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            count_digit++;
        }
        else if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            count_space++;
        }
        i++;
    }
    cout<<count_character<<" "<<count_digit<<" "<<count_space;
    return 0;
}