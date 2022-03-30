/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:26:17 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/30 22:46:41 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	std::cout << "default tests:" << std::endl << std::endl;
    {
        try {
            Bureaucrat a("Samurai", 19);
            RobotomyRequestForm b("Iga");
            ShrubberyCreationForm c("Ise");
            PresidentialPardonForm d("Kai");
            try {
                a.signForm(c);
                a.signForm(b);
                a.signForm(d);
                b.beSigned(a);
                c.beSigned(a);
                d.beSigned(a);
                a.executeForm(c);
                a.executeForm(b);
                a.executeForm(d);
                c.execute(a);
                b.execute(a);
                d.execute(a);
            }
            catch (const std::exception & e) {
                std::cerr << e.what() << std::endl;
            }
            
        }
        catch (const std::exception & e) {
            std::cerr << e.what() << std::endl;
        }
    }
    std::cout  << std::endl;
    {
        try {
            Bureaucrat a("Ronin", 150);
            PresidentialPardonForm b("Awa");
            try {
                a.signForm(b);
                b.beSigned(a);
                a.executeForm(b);
            }
            catch (const std::exception & e) {
                std::cerr << e.what() << std::endl;
            }
        }
        catch (const std::exception & e ) {
            std::cerr << e.what() << std::endl;
        }
        std::cout << std::endl << "____________________________________" << std::endl;
	}
}