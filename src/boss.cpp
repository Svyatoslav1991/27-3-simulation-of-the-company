#include "..\include\boss.h"

Boss::Boss(std::string name, const std::vector<Manager*>& vManagers) : Employee(name), m_vManagers(vManagers)
{

}

//--------------------------------------------------------------------------------------------------------------

Boss::~Boss()
{
	std::cout << "\ndelete " << m_name << "\n";
	for (auto* manager : m_vManagers)
	{
		delete manager;
	}
}

//--------------------------------------------------------------------------------------------------------------

void Boss::performTask(int64_t value)
{
	for (auto* manager : m_vManagers)
	{
		if (manager->getCountFreeWorkers())
		{
			manager->performTask(value);
		}
	}
}

//--------------------------------------------------------------------------------------------------------------

int64_t Boss::getFreeWorkers() const
{
	int count = 0;
	for (const auto* manager : m_vManagers)
	{
		count += manager->getCountFreeWorkers();
	}

	return count;
}
