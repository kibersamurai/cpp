/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:25:46 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/30 22:16:10 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), target("default") {

}

PresidentialPardonForm::PresidentialPardonForm( std::string _target ) : Form("PresidentialPardonForm", 25, 5), target(_target) {

}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form("PresidentialPardonForm", 25, 5) {
    *this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator= ( const PresidentialPardonForm & src ) {
    if (this != &src) {
        this->setIsSigned(src.getIsSign());
        this->target = src.target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (!this->getIsSign()) {
        throw FormIsNotSigned();
    }
    if (executor.getGrade() <= this->getGradeExecute())
        std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    else
        throw GradeTooLowException();
}

std::string PresidentialPardonForm::getTarget( void ) const {
    return this->target;
}

