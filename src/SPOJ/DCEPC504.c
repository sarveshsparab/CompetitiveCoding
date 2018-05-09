#include<stdio.h>
char recurse(int y, long long int i)
{
    if(y == 0 && i == 0)
        return 'm';
    long long int par = i >> 1;
    char c = recurse(y - 1, par);
    if(i == 2 * par)
        c = ((c == 'm') ? 'm' : 'f');
    else
        c = ((c == 'm') ? 'f' : 'm');
    return c;
}
int main()
{
    int y, t;
    long long int idx;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%lld", &y, &idx);
        y--;
        idx--;
        printf("%s\n", ((recurse(y, idx) == 'm') ? "Male" : "Female"));
    }
    return 0;
}
