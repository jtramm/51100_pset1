#include<stdio.h>
#include<stdlib.h>

typedef struct{
	double * data; /* Pointer to data */
	int size;      /* Size of the array from the user's perspective */
	int capacity;  /* The actual size of allocation "data" pointer points to */
} Vector;

/* Sets the element at given index of the vector to value */
void set( Vector * v, int index, double value )
{
	/* Your code here */
}

/* Returns the value at given index of the vector */
double get( Vector * v, int index )
{
	/* Your code here */
}

/* Doubles the capacity of the vector */
/* If capacity is 0, increases capacity to 1 */
/* Used by the "insert" and "append" functions */
void resize( Vector * v )
{
	/* Your code here */
}

/* Moves all values at and after the given index to the right
 * one element, then sets the value at given index. */
void insert( Vector * v, int index, double value )
{
	/* Your code here */
}

/* Appends a value to the vector, automatically
 * resizing the vector if necessary by calling the
 * resize() function */
void append( Vector * v, double value )
{
	/* Your code here */
}

/* Deletes the given index, and moves all values after
 * the index to the left by one element.
 * This reduces the size of the vector by 1, but the
 * capacity should remain the same */
void delete( Vector * v, int index )
{
	/* Your code here */
}

/* Initializes the vector to a specified size.
 * Capacity is set to be equal to the size of the vector.
 * All elements of the vector are initialized to 0. */
void init( Vector * v, int size )
{
	/* Your code here */
}

/* Free's any memory allocated to data pointed of the vector,
 * sets size = capacity = 0, and the data pointer to NULL. */
void free_vector(Vector * v )
{
	/* Your code here */
}

/* Prints the vector in a clean format. If vector is empty,
 * just print "<  >" */
void print(Vector * v )
{
	int i;
	double value;
	printf("< ");
	for( i = 0; i < v->size; i++ )
	{
		value = get(v, i);
		printf("%.1f", value);
		if( i < v->size - 1 )
			printf(", ");
	}
	printf(" >\n");
}

int main(int argc, char * argv[] )
{
	int i;

	/* Initialize Vector */
	Vector v;
	printf("test init...\n");
	init(&v, 2);
	print(&v);

	/* Append some items to vector, and print each time */
	printf("test append...\n");
	for( i = 0; i < 5; i++ )
	{
		append(&v, i / 10.0 );
		print(&v);
	}

	/* Test set */
	printf("test set...\n");
	set(&v, 2, 1.0);
	print(&v);
	set(&v, 0, 2.0);
	print(&v);

	/* Test get */
	printf("test get...\n");
	printf("get value = %.2f\n", get(&v, 3));
	
	/* Test insert */
	printf("test insert...\n");
	insert(&v, 2, 2.0);
	print(&v);
	insert(&v, 5, 3.0);
	print(&v);

	/* Test delete */
	printf("test delete...\n");
	delete(&v, 6);
	print(&v);

	/* Append some items to vector, and print each time */
	printf("test append...\n");
	for( i = 0; i < 5; i++ )
	{
		append(&v, i / 5.0 );
		print(&v);
	}

	/* Test free */
	printf("test free...\n");
	free_vector(&v);
	print(&v);

	return 0;
}
