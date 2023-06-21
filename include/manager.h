#pragma once
#include "worker.h"
#include <vector>

class Manager final : public Employee
{
public:
	Manager (std::string name, const std::vector<Worker*>& vWorkers, int64_t id);
	virtual ~Manager () override;
	virtual void performTask(int64_t value) override;
	int64_t getCountFreeWorkers() const;

private:
	std::vector<Worker*> m_vWorkers;
	int64_t m_id;
	int64_t m_countFreeWorkers;
};