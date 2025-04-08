#include <iostream>
using namespace std;


void MIN(int* tab, int size){

    int minVal = tab[0];
    for(int i =0; i<size;i++){
        if(tab[i]<minVal){
            minVal=tab[i];
        }
    }

    cout<<"MIN: "<<minVal<<endl;
}

void MAX(int* tab, int size){

    int maxVal = tab[0];
    for(int i =0; i<size;i++){
        if(tab[i]>maxVal){
            maxVal=tab[i];
        }
    }

    cout<<"MAX: "<<maxVal<<endl;
}

void AVARAGE(int* tab, int size){

    int i =0;
    int suma = 0;

    while (i<size)
    {
        suma+=tab[i];
        i++;
    }

    int avarage = suma/size;
    cout<<"AVARAGE: "<<avarage<<endl;
    
    
}

int main(){

    int tab[]={2,34,1,33333,3};
    int size = sizeof(tab)/sizeof(tab[0]);

    MIN(tab,size);
    MAX(tab,size);
    AVARAGE(tab,size);


}