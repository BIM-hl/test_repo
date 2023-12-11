#ifndef PRINT_N_
#define PRINT_N_

void printN(int n)
{
	if(n)
	{
		printN(n-1);
		std::cout << n << std::endl;
	}
	return;
}