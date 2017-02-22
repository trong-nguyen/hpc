#include <mpi.h>
#include <iostream>

int main(int argc, char *argv[])
{
	MPI_Init(&argc, &argv);

	int nnodes, rank, len;
	char name[MPI_MAX_PROCESSOR_NAME];
	MPI_Comm_size(MPI_COMM_WORLD, &nnodes);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Get_processor_name(name, &len);

	std::cout << "This node has rank: " << rank << " / " << nnodes << " on host " << name << "\n";

	MPI_Finalize();
	return 0;
}