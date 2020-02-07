#include <iostream>
#include <cmath>
using namespace std;

void stat(const double [],int ,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

void stat(const double A[], int N, double B[])
{
    // Find Average ( B[0] )
    int i = 0;
    B[0] = 0;
    while(i < N){
        B[0] += A[i];
        i++;
    }
    B[0] /= N;

    // Find SD ( B[1] )
    int j = 0;
    B[1] = 0;
    while(j < N){
        B[1] += pow(A[j], 2);
        j++;
    }
    B[1] = sqrt(((1.0/N) * B[1]) - pow(B[0], 2.0));

    // Find Max ( B[2] )
    int k = 0;
    B[2] = 0;
    while(k < N){
        if(A[k] > B[2]){
            B[2] = A[k];
        }
        k++;
    }

    // Find Min ( B[3] )
    int l = 0;
    B[3] = 0;
    while(l < N){
        if(A[l] < B[3]){
            B[3] = A[l];
        }
        l++;
    }
}
