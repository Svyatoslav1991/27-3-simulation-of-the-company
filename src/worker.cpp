#include "..\include\worker.h"

Worker::Worker(std::string name) : Employee(name), m_isFree(true)
{
	std::cout << "Create a new worker " << m_name << "\n";
}

//-----------------------------------------------------------------

Worker::~Worker()
{
	std::cout << "    delete " << m_name << "\n";
}

//-----------------------------------------------------------------

void Worker::performTask(int64_t value)
{
	if (m_isFree)
	{
		std::string task;
		switch (value)
		{
		case 0:
			task = "A";
			break;
		case 1:
			task = "B";
			break;
		default:
			task = "C";
			break;
		}
		std::cout << "    Worker " << m_name << " performs a task " << task << "\n";
		m_isFree = false;
	}
}

//-----------------------------------------------------------------

bool Worker::getIsFree() const
{
	return m_isFree;
}

