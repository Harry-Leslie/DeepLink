#include "vector.h"
#include "dataframe.h"
#include <stdlib.h> 

dataframe* add_vector(double* array, char* name, size_t size){
	dataframe* created = (dataframe* )malloc(sizeof(dataframe));
	created->row = size;
	created->col = 1;
	vector* vec = (vector*)malloc(sizeof(vector));
	vec->name = name;
	vec->vec = array;
	created->column_vectors = vec;
	return created;
}




