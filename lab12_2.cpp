#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [N][M],int,int,int);

void showImage(const bool [N][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "\nInput your brush size and location:";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 && x != 0 && y != 0 );
             return 0;
}

void updateImage(bool image[N][M], int s, int x, int y)
{
    for(int i = 0;i < (N-1);i++){
        for(int j = 0;j < (M-1);j++){
            if(sqrt(pow((i-x), 2) + pow((j-y), 2)) <= (s-1)){
                image[i][j] = 1;
            }
        }
    }
}

void showImage(const bool image[N][M])
{
    cout << setfill('-') << setw(72) << endl;
    for(int i = 0; i < (N-1); i++){
        for(int j = 0; j < (M-1); j++){
            if(image[i][j] == 1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl << setfill(' ') << setw(71) << "|" << endl;
    }
    cout << setfill('-') << setw(107) << endl;
}

