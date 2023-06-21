#include <ctime>
#include <cstdlib>
#include <boss.h>
#include <string>


#include "functions.h"


int main() {
	std::cout << "\tTASK 27.3 SIMULATION OF THE COMPANY\n\n";

	srand(time(NULL));
	int64_t amountOfManagers = rand() % 3 + 3;//3-5

	std::vector<Manager*> vManagers;
	vManagers.reserve(amountOfManagers);

	for (int64_t i = 0; i < amountOfManagers; ++i)
	{
		int64_t amountOfWorkers = rand() % 3 + 3;//3-5
		std::vector<Worker*> vWorkers;
		vWorkers.reserve(amountOfWorkers);
		for (int64_t j = 0; j < amountOfWorkers; j++)
		{
			Worker* worker = new Worker("Worker_" + std::to_string(i + 1) + std::to_string(j + 1));
			vWorkers.push_back(worker);
		}
		Manager* manager = new Manager("Manager_" + std::to_string(i + 1), vWorkers, i + 1);
		vManagers.push_back(manager);
	}

	Boss* boss = new Boss("Boss", vManagers);

	while (boss->getFreeWorkers())
	{
		std::cout << "\nBoss creates a task\n";
		int64_t task;
		do
		{
			std::cout << "Enter a value more than 0\n";
			task = myCin<int64_t>();
		} while (task <= 0);

		boss->performTask(task);
	}

	delete boss;

	return 0;
}