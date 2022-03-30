/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:57:31 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/30 21:09:19 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name ("default"), grade(150)
{
}

Bureaucrat::Bureaucrat (std::string _name, int _grade) : name(_name)
{
	std::cout << name << " - attempt to instantiate a Bureaucrat " << std::endl;
	if (_grade > 150)
		throw GradeTooLowException();
	if (_grade < 1)
		throw GradeTooHighException();
	this->grade = _grade;
	std::cout << name << " - created " << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src) : name (src.name)
{
	*this = src;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade is to high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is to low";
}

Bureaucrat::~Bureaucrat( void ) {
	  std::cout << std::endl;
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
		if (_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		if (_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->grade = _grade;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat & Bureaucrat::operator= (const Bureaucrat & src )
{
	if (this != &src)
		this->grade = src.grade;
	return *this;
}

Bureaucrat &Bureaucrat::operator--(){
	setGrade(grade + 1);
	return (*this);
}

Bureaucrat &Bureaucrat::operator++(){
	setGrade(grade - 1);
	return (*this);
}


/*  overload of the insertion («) operator to print */ 
std::ostream& operator<<(std::ostream& out, const Bureaucrat &a) {
    out << a.getName() << ", bureaucrat grade " << a.getGrade();
    return (out);
}

void Bureaucrat::signForm( const Form & src)
{
	if (this->grade <= src.getGradeSign())
        std::cout << this->name << " signs " << src.getName() << std::endl;
    else {
        std::cerr << this->name << " cannot sign " << src.getName() << " because ";
        throw GradeTooLowException();
	}
}

void Bureaucrat::executeForm( const Form & src)
{
	if (this->grade <= src.getGradeSign())
        std::cout << this->name << " executes " << src.getName() << std::endl;
    else {
        std::cerr << this->name << " cannot execute " << src.getName() << " because ";
        throw GradeTooLowException();
	}
}