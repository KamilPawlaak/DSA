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

int main(){

    int tab[]={2,34,1,33333,3};
    int size = sizeof(tab)/sizeof(tab[0]);

    MIN(tab,size);
    MAX(tab,size);


}