/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:01:33 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/30 22:07:21 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public Form {
	
	private:
		std::string target;
		ShrubberyCreationForm();
		
	public:
		ShrubberyCreationForm( std::string _target);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm ( const ShrubberyCreationForm & src );
		ShrubberyCreationForm & operator= ( const ShrubberyCreationForm & src);

		virtual void execute(Bureaucrat const & executor) const;
		virtual std::string getTarget(void) const;

};

#endif