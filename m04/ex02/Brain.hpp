#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain& brain);
	Brain& operator=(const Brain& brain);
	~Brain();
	std::string getIdea(unsigned int i);
	void setIdea(unsigned int i, const std::string & str);
};

#endif /* BRAIN_HPP */
