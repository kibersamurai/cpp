/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:57:31 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/21 22:11:40 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat (std::string _name, int _grade) : name(_name)
{
	if (_grade < 1)
		throw GradeTooLowException();
	if (_grade > 150)
		throw GradeTooHighException();
	this->grade = _grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade is to high";
}


const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is to low";
}

Bureaucrat::~Bureaucrat( void ) {
}