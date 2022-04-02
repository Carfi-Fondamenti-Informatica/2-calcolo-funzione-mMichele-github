#include <iostream>
using namespace std;
int main()
{
    float a=0, b=0, x=0, y=0, z=0;
    cout << "Inserire quattro numeri reali a piacere a, b, x, y :"<< endl;
    cin >> a >> b >> x >> y;
    if (x<0 && y>0)
    {
        z = a * x - b * y;
        cout << "z = " << z << endl;
    }
    else if(x>=0 && y<=0)
    {
        z = a*x*x - b*y;
        cout  <<"z = "<< z<< endl;
    }
    else
    {
        z=a*x + b*y*y;
        cout << "z = " << z <<endl;
    }
    return 0;
}
