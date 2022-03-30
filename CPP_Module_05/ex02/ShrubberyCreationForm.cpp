/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:07:43 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/30 22:36:41 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), target("default") {

}

ShrubberyCreationForm::ShrubberyCreationForm( std::string _target ) : Form("ShrubberyCreationForm", 145, 137), target(_target) {

}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form("ShrubberyCreationForm", 145, 137) {
    *this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator= ( const ShrubberyCreationForm & src ) {
    if (this != &src) {
        this->setIsSigned(src.getIsSign());
        this->target = src.target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (!this->getIsSign()) {
        throw FormIsNotSigned();
    }
    if (executor.getGrade() <= this->getGradeExecute()) {
        try {
            std::ofstream ofs;
            ofs.open(this->target + " shrubbery");
            ofs << "       _-_" << std::endl;
            ofs << "    /~~   ~~\\" << std::endl;
            ofs << " /~~         ~~\\" << std::endl;
            ofs << "{        ~      }" << std::endl;
            ofs << " \\  _-     -_  /" << std::endl;
            ofs << "   ~  \\\\ //  ~" << std::endl;
            ofs << "_- -   | | _- _" << std::endl;
			ofs << "_- -   | | _- _" << std::endl;
            ofs << "  _ -  | |   -_" << std::endl;
            ofs << "      // \\\\" << std::endl;
        }
        catch (const std::exception & e) {
            std::cout << "File open error" << std::endl;
        }
    }
    else
        throw GradeTooLowException();
}

std::string ShrubberyCreationForm::getTarget( void ) const {
    return this->target;
}