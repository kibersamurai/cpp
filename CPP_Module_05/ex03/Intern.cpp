/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:57:14 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/30 23:03:51 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *Intern::presidental(std::string &target) {
    return (new PresidentialPardonForm(target));
}

Form *Intern::robot(std::string &target) {
    return (new RobotomyRequestForm(target));
}

Form *Intern::tree(std::string &target) {
    return (new ShrubberyCreationForm(target));
}

Intern::Intern() {
    formNames[0] = "presidental pardon";
    formNames[1] = "robotomy request";
    formNames[2] = "shrubbery creation";
    formCreate[0] = &Intern::presidental;
    formCreate[1] = &Intern::robot;
    formCreate[2] = &Intern::tree;
    std::cout << "Intern default constructor called!"
              << std::endl;

}

Intern::Intern(const Intern &a) {
    for (int i = 0; i < 3; ++i) {
        this->formNames[i] = a.formNames[i];
        this->formCreate[i] = a.formCreate[i];
    }
    std::cout << "Intern copy constructor called!"
              << std::endl;
}

Intern &Intern::operator=(const Intern &a) {
    for (int i = 0; i < 3; ++i) {
        this->formNames[i] = a.formNames[i];
        this->formCreate[i] = a.formCreate[i];
    }
    std::cout << "Intern assigment operator called!"
              << std::endl;
    return (*this);
}

Intern::~Intern() {
    std::cout << "Intern destructor called!"
              << std::endl;
}

Form *Intern::makeForm(std::string formName, std::string target) {
    Form *ptr = NULL;
    for (int i = 0; i < 3; ++i) {
        if (formNames[i] == formName)
            ptr = (this->*formCreate[i])(target);
    }
    if (ptr == NULL)
        std::cout << "Error! Form not found!" << std::endl;
    else
        std::cout << "Intern creates " << ptr->getName() << std::endl;
    return (ptr);
}