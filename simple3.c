#include <mpi.h>
#include <stdio.h>
int main(int argc,char **argv) {
	int my_rank;
	int size;
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
        MPI_Comm_size(MPI_COMM_WORLD, &size);

	printf("Hello World! I am rank(Processor number) %d of size %d\n", my_rank, size);
	MPI_Barrier(MPI_COMM_WORLD);
	if(my_rank==0) printf("That is all for now!\n");

	MPI_Finalize();
       // exit(0);

}


