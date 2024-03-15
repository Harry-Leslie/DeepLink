#include <stdlib.h>
#include "vector.h"

#ifndef DATAFRAME_H
#define DATAFRAME_H

struct dataframe {
	int row;
	int col;
	vector* column_vectors;
};

typedef struct dataframe dataframe;

dataframe* add_vector(double* array, char* name, size_t size);

#endif
