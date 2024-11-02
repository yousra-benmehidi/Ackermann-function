#include <iostream>

using namespace std;
double a(int m, int n)
{
    if(m==0)
        return(n+1);
    else
    {
        if(m>0 && n==0)
        {
            return(a(m-1,1));
        }
        if(m>0 && n>0)
        {
            return(a(m-1,a(m,n-1));
        }
    }
}
int main()
{
    cout << a(3,5);
    return 0;
}
