#include <iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
    double long x,z,s,n,yn,yb;
    cout<< "Please enter x\n";
    cin>> x;
    if(x>0 && x<1)
    {
        n=0;
        s=1;
        do
        {
            n++;
            yn=pow(-1,n)*(pow(x,2*n)+1)*pow((pow(2,n)+1),-1); // current member
            yb=pow(-1,n-1)*(pow(x,2*(n-1))+1)*pow((pow(2,n-1)+1),-1); //previous member
            s=s+yn;
            z=yn-yb;
        }while(fabs(z)>pow(10,-5));
            cout<<"sum="<<s;
    }
    else
    cout<< "the value of x does not meet the condition";


    return 0;
}
