#include <iostream>
#include "lattice.h"

double latticePaths(int dimensions){
    double array[dimensions+1][dimensions+1];

    array[0][0] = 0;

    //Initialize the outside row and column of the grid
    for(int a=1; a<dimensions+1; a++){
        array[0][a] = 1;
        array[a][0] = 1;
    }

    //Initialize the rest
    for(int a=1; a<dimensions+1; a++){
        for(int b=1; b<dimensions+1; b++){
            array[a][b] = array[a][b-1] + array[a-1][b];
        }
    }

    return array[dimensions][dimensions];
}
