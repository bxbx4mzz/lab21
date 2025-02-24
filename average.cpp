#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc == 1)
        cout << "Please input numbers to find average.";
    else
    {
        float sum, num = 0;
        for (int i = 1; i < argc; i++)
        {
            num += atof(argv[i]);
        }
        sum = num / (argc - 1);
        cout << "---------------------------------\n";
        cout << "Average of " << argc - 1 << " numbers = " << sum << "\n";
        cout << "---------------------------------\n";
    }
}
