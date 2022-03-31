/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:20:30 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/30 21:29:13 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string target;
	PresidentialPardonForm(/* args */);
public:
	PresidentialPardonForm(std::string _target);
	virtual ~PresidentialPardonForm();
	
	PresidentialPardonForm( const PresidentialPardonForm & src);
	PresidentialPardonForm & operator= ( const PresidentialPardonForm & src);

	virtual void execute(Bureaucrat const & executor) const;
	virtual std::string getTarget( void ) const;
};

#endif