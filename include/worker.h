#pragma once
#include "employee.h"

class Worker final : public Employee
{
public:
	Worker(std::string name);
	virtual ~Worker() override;

	virtual void performTask(int64_t value) override;
	bool getIsFree() const;
private:
	bool m_isFree;
};
