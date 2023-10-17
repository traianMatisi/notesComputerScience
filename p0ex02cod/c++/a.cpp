#include <iostream>

using namespace std;

float fx(float);

int main(int argc, char**argv)
{
    cout << argc << endl << ">>> ";
    cout << "f(x) = " << argv[1] << endl;
    return 0;
}

float fx(float a)
{
    return (a*a) - (3*a) + 5;
}