#include <iostream>

using namespace std;

int main()
{
int vetor[] {1,2,3,4,5,6,7,8,9,10};

cout << "Percorrendo vetor de maneira normalizada" << endl;
for(int i = 0; i < 10; i++)
{
    cout << vetor[i] << " - ";
}

cout << endl << "Percorrendo vetor com range-for" << endl;
for(int x : vetor)
{
    cout << x << " - ";
}

    return 0;
}