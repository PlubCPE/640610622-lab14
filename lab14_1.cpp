#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]); // 6
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N, double B[])
{
    double  sumB1 = 0.0, mean, stdDev = 0.0, sumB2 = 1, sumB3, Max, Min;
    for(int i = 0; i < N;i++)
    {
        sumB1 += A[i];
        sumB2 *= A[i];
        sumB3 += (double)1/A[i];
        if(A[i] > Max)
        {
            Max = A[i];
        }
        else
        {
            Min = A[i];
        }


        
        B[0] += A[i]/N;
        B[2] = pow(sumB2, (double)1/N);
        B[3] = N/sumB3;
        B[4] = Max;
        B[5] = Min;
        
       
    }
     mean = (double)sumB1/N;
    for(int i = 0; i < 6;i++)
    {
         stdDev += pow(A[i] - mean,2);
         B[1]  = sqrt(stdDev/N);
    }

    
}



void stat(const double A[],int N, double B[])
{
    double sum,sumB1, mean, stdDev , sumB2 = 1.0, sumB3, Max = A[0] , Min = A[0];
    for(int i = 0; i < N;i++)
    {
        sum += A[i]/N;
        sumB1 += A[i];
        sumB2 *= A[i];
        sumB3 += 1/A[i];
       
     
        if(A[i] > Max)
        {
            Max = A[i];
        }
        if (A[i] < Min)
        {
            Min = A[i];
        }


        
        B[0] = sum;
        B[2] = pow(sumB2,(1.0/N));
        B[3] = N/sumB3;
        B[4] = Max;
        B[5] = Min;
        
       
    }
     mean = sumB1/N;
     for(int i = 0; i < N;i++)
     {
      stdDev += pow((A[i] - mean),2.0);
      B[1]  = sqrt(stdDev/N);
     }
     

    
}
    