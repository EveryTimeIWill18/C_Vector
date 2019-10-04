//
// Created by William Robert Murphy on 2019-10-04.
//

#ifndef C_VECTOR_C_VECTOR_H
#define C_VECTOR_C_VECTOR_H

typedef struct data {
    int size;
    int position;
    double* data_array;
}Data;

Data* init_data(int n);

Data* insert(Data *d, double value);

int get_size(Data *d);

int get_position(Data *d);

#endif //C_VECTOR_C_VECTOR_H
