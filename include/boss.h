#pragma once
#include "manager.h"

class Boss : public Employee
{
public:
	Boss(std::string name, const std::vector<Manager*>& vManagers);
	virtual ~Boss() override;
	virtual void performTask(int64_t value) override;
	int64_t getFreeWorkers() const;

private:
	std::vector <Manager*> m_vManagers;
};