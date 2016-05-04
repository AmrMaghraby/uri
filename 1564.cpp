
#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
    int people;
    
    while (scanf("%d",&people) != EOF){
        if (people) cout << "vai ter duas!" << endl;
        else cout << "vai ter copa!" << endl;
    }

    return 0;
}
