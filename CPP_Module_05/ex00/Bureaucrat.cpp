/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:57:31 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/22 20:46:43 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    std::cout << " >>  Bureaucrat default constructor called!"
              << std::endl;
}

Bureaucrat::Bureaucrat (std::string _name, int _grade) : name(_name)
{
	std::cout << name << " - attempt to instantiate a Bureaucrat " << std::endl;
	if (_grade < 1)
		throw GradeTooLowException();
	if (_grade > 150)
		throw GradeTooHighException();
	this->grade = _grade;
	std::cout << name << " - created " << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade is to high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is to low";
}

Bureaucrat::~Bureaucrat( void ) {
	  std::cout << " >>  Bureaucrat destructor called!" << std::endl;
}

std::string Bureaucrat::getName (void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::setGrade(int _grade)
{
	std::cout << " >>  Called setGrade() " << std::endl;
	try {
		if (_grade < 1)
			throw Bureaucrat::GradeTooLowException();
		if (_grade > 150)
			throw Bureaucrat::GradeTooHighException();
		else
			this->grade = _grade;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
