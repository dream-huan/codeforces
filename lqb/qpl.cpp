#include <iostream>
#include <string.h>
using namespace std;
static int sum = 0;
void Swap(char &a, char &b)
{
    char tmp = a;
    a = b;
    b = tmp;
}
void Grial(char *s1, char *s2)
{
    if (s1 == NULL || s2 == NULL)return;
    if (*s2 == '\0')
        cout << s1 << endl;
    for (char *p = s2; *p != '\0'; p++)
    {
        //sum++;
        Swap(*p,*s2);
        Grial(s1,s2+1);
        //if (*p!=*s2)
        Swap(*p,*s2);
    }
//  cout << sum << endl;
}
void Grial(char *str)
{
    Grial(str, str);
}
int main()
{
    char *str = new char[5];
    strcpy(str,"abcdefg");
    Grial(str);
}