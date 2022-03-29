/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:57:31 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/29 21:44:37 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), Signed(false), gradeSign(150), gradeExec(150)
{
    std::cout << " >>  Form default constructor called!"
              << std::endl;
}

Form::Form (std::string _name, int grade1, int grade2) : name(_name), Signed(false), gradeSign(grade1), gradeExec(grade2)
{
	std::cout << name << " - attempt to instantiate a Form " << std::endl;
	if (_grade > 150)
		throw GradeTooLowException();
	if (_grade < 1)
		throw GradeTooHighException();
	this->grade = _grade;
	std::cout << name << " - created " << std::endl;
}

const char* Form::GradeTooHighException::what() const throw(){
    return "Grade is to high";
}

const char* Form::GradeTooLowException::what() const throw(){
    return "Grade is to low";
}

Form::~Form( void ) {
	  std::cout << " >>  Form destructor called!" << std::endl;
}

std::string Form::getName (void) const
{
	return (this->name);
}

int Form::getGrade(void) const
{
	return (this->grade);
}

void Form::setGrade(int _grade)
{
	std::cout << " >>  Called setGrade() " << std::endl;
	try {
		if (_grade > 150)
			throw Form::GradeTooLowException();
		if (_grade < 1)
			throw Form::GradeTooHighException();
		else
			this->grade = _grade;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form & Form::operator= (const Form & src )
{
	if (this != &src)
		this->grade = src.grade;
	return *this;
}

Form &Form::operator--(){
	setGrade(grade + 1);
	return (*this);
}

Form &Form::operator++(){
	setGrade(grade - 1);
	return (*this);
}

/*  overload of the insertion («) operator to print */ 
std::ostream& operator<<(std::ostream& out, const Form &a) {
    out << a.getName() << ", Form grade " << a.getGrade();
    return (out);
}

void Form::beSigned(const Bureaucrat & src)
{
	if (src.getGrade() <= this->gradeSign)
		this->Signed = true;
	else
		throw GradeTooLowException();
}