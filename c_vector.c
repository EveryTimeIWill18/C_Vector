//
// Created by William Robert Murphy on 2019-10-04.
//
#include "c_vector.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

Data* init_data(int n) {
    Data* d = (Data*)malloc(sizeof(Data));
    d->size = n;
    d->position = 0;
    d->data_array = (double*)malloc(d->size* sizeof(double));
    return d;
}

Data* insert(Data *d, double value) {
    if (d->position < d->size - 1) {
        *(d->data_array + d->position) = value;
        d->position++;
    } else {
        printf("Data array is full! Consider resizing.");
    }

    return d;
}

int get_size(Data *d){
    return d->size;
}


int get_position(Data *d) {
    return d->position;
}