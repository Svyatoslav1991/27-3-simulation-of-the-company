# 27-3-simulation-of-the-company

Implement a simulation of the operation of the company.
The company has a vertical management with a hierarchy.
There are main workers, subordinates, divided into teams.
Each team has a middle manager.
The whole company is managed by the head of the company.
All employees, including the manager, have names.
The head of the company performs strategic management.
It determines the main vector of movement - the tasks of the upper level.
Middle managers break these tasks into subtasks and distribute them to their subordinates.
Subordinates do the work.
The implementation of this logic should be simplified.
The company head indications come from standard input and are nothing more than integer identifiers.
These identifiers serve as the seed for the random number generator.
Each of the managers, accepting this integer command, adds its ordinal number to it and calls the std::srand() function with the resulting sum.
Based on this sum, the total number of tasks that this team needs to complete is calculated - from 1 to the number of workers in the group.
There are three types of tasks for workers: A, B and C.
They are also chosen randomly and distributed among unemployed workers.
When starting the program, the user specifies in the standard input the number of teams and the number of workers in each team.
Next, the user enters integers that correspond to the instructions of the head of the company.
When a worker or manager is given instructions or a task, it is reported to the standard output, including the name of the worker.
The program ends when all workers are busy with some tasks.
