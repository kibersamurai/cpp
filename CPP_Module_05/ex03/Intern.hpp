/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:03:18 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/30 23:03:27 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
private:
    std::string formNames[3];
    Form* (Intern::*formCreate[3])(std::string &target);
    Form* presidental(std::string &target);
    Form* robot(std::string &target);
    Form* tree(std::string &target);
public:
    Intern();
    Intern(const Intern& a);
    Intern& operator=(const Intern& a);
    ~Intern();
    Form* makeForm(std::string formName, std::string target);
};

#endif