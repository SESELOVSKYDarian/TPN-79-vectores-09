#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> GenerarVector(int n);
int EscalarVector(vector<int> a, vector<int> b);
void MostrarVector(vector<int> A);

int main()
{
    vector<int> A;
    vector<int> B;
    srand(time(NULL));
    int N, escalar;
    cout<<"Ingrese cantidad para el vector: ";
    cin>>N;
    A = GenerarVector(N);
    B = GenerarVector(N);
    MostrarVector(A);
    MostrarVector(B);
    escalar = EscalarVector(A, B);
    cout<<"Escalado es: "<<escalar<<endl;
    return 0;
}

vector<int> GenerarVector(int n)
{
    vector<int> V;
    int e;
    for (int i = 0; i < n; i++)
    {
        e = rand() % 10;
        V.push_back(e);
    }
    return V;
}

int EscalarVector(vector<int> a, vector<int> b)
{
    vector<int> mul;
	int e = 0, sum = 0;
    for (int i = 0; i < b.size(); i++)
    {
        e = a[i]*b[i];
        mul.push_back(e);
    }
    for (int j = 0; j < mul.size(); j++)
    {
        sum += mul[j];
    }
    return sum;
}

void MostrarVector(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << "/";
    }
    cout << endl;
}