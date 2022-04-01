/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:57:31 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/30 20:58:56 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), Signed(false), gradeSign(150), gradeExec(150)
{
    std::cout <<  std::endl;
}

Form::Form (std::string _name, int grade1, int grade2) : name(_name), Signed(false), gradeSign(grade1), gradeExec(grade2)
{
	if (grade1 > 150 || grade2 > 150)
		throw GradeTooLowException();
	if (grade1 < 1 || grade2 < 1)
		throw GradeTooHighException();
	std::cout << "Form constructor called with all parameters!" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw(){
    return "Grade is to high";
}

const char* Form::GradeTooLowException::what() const throw(){
    return "Grade is to low";
}

Form::~Form( void ) {
	  std::cout << std::endl;
}

std::string Form::getName (void) const
{
	return (this->name);
}

Form & Form::operator= (const Form & src )
{
	Signed = src.getIsSign();
	std::cout <<  std::endl;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Form &a) {
    out << a.getName() << ", grade needed for sign is " << a.getGradeSign()
	<< ", grade needed for executing " << a.getGradeExecute()
	<< ". Form is signed: " ;
		if (a.getIsSign())
			std::cout << "Yes" << std::endl;
		else
			std::cout << "No" << std::endl;
	return (out);
}

void Form::beSigned(const Bureaucrat & src)
{
	if (src.getGrade() <= this->gradeSign)
		this->Signed = true;
	else
		throw GradeTooLowException();
}

bool Form::getIsSign( void) const 
{
	return this->Signed;
}

int Form::getGradeSign( void) const 
{
	return this->gradeSign;
}

int Form::getGradeExecute( void) const 
{
	return this->gradeExec;
}
