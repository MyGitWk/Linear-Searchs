// linearsearch


#include <iostream>
using namespace std;


int linearSearchAlgorithm(int arrayElements[], int sizeOfArray, int searchValue)
{
    for(int i = 0; i < sizeOfArray; i++)
    {
        if (searchValue == arrayElements[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int a[] = {35, 63, 17, 41, 77, 26, 71, 53, 62, 14};

    int valueEntered;

    cout << "Enter an integer: " << endl;
    cin >> valueEntered;

    int result = linearSearchAlgorithm(a, 10, valueEntered);

    if(result >= 0)
    {
        cout << "The number " << a[result] << " was found at the"
                " element with index # " << result << endl;
    }
    else
    {
        cout << "Sorry, the number " << valueEntered << " was not found. " << endl;
    }


}
