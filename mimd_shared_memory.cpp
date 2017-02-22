#include "omp.h"
#include <iostream>

int main()
{
	std::cout << "Total number of threads " << omp_get_num_threads() << "\n";
	#pragma omp parallel 
	for (int i = 0; i < omp_get_num_threads(); ++i){
		#pragma omp critical
		{
			std::cout << "I am solder " << omp_get_thread_num() << "\n";
		}
	}
}