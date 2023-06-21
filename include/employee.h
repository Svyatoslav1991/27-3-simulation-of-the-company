#pragma once
#include <iostream>

class Employee
{
public:
	Employee(std::string name);
	virtual ~Employee() = 0;

	virtual void performTask(int64_t value) = 0;

protected:
	std::string m_name;
};
