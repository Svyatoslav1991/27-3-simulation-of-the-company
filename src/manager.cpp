#include "..\include\manager.h"

Manager::Manager(std::string name, const std::vector<Worker*>& vWorkers, int64_t id) : Employee(name), m_vWorkers(vWorkers), m_countFreeWorkers(vWorkers.size()), m_id(id)
{
	std::cout << "  Create a new manager " << m_name << "\n";
}

//--------------------------------------------------------------------------------------------------------------------------------------------

Manager::~Manager()
{
	std::cout << "  delete " << m_name << "\n";
	for (auto* worker : m_vWorkers)
	{
		delete worker;
	}
}

//---------------------------------------------------------------------------------------------------------------------------------------------

void Manager::performTask(int64_t value)
{
	std::cout << "  Manager " << m_name << " distributes tasks to workers\n";
	srand(value + m_id);

	int64_t tasksCount = rand() % m_countFreeWorkers + 1;

	for (int64_t i = 0; i < tasksCount; )
	{
		Worker* worker = m_vWorkers[rand() % m_vWorkers.size()];
		if (worker->getIsFree())
		{
			i++;
			worker->performTask(rand() % 3);
			m_countFreeWorkers--;
			if (m_countFreeWorkers == 0)
			{
				break;
			}
		}
	}

}

//------------------------------------------------------------------------------------------------

int64_t Manager::getCountFreeWorkers() const
{
	return m_countFreeWorkers;
}
