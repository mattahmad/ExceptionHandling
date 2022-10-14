#include <stdexcept>
#include <limits>
#include <iostream>

using namespace std;

void MyFunc(int c)
{
    if (c > numeric_limits<char> ::max())
        throw invalid_argument("MyFunc argument to large.");
}

int main(int argc, const char * argv[]) {
    try
    {
        MyFunc(256);
    }
    
    catch (invalid_argument& e)
    {
        cerr << e.what() << endl;
        return -1;
    }

    return 0;
}
