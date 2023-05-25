#include <iostream>
#include <iomanip>
using namespace std;

int main() {
double pi = 0.0;
int it = 1000000;
for (int i = 0 ; i < it ; ++i) {
double num;
if (i%2 !=0)
{
    num = -1;
}
else
{
    num = 1;
}
double den = 2*i+1;
pi += num / den; 
}
pi *= 4;
cout << "El valor aproximado de pi, con 6 decimales, es: " << setprecision(7) << pi << endl;
return 0;
}
