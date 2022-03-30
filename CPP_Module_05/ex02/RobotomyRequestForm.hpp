/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:37:05 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/30 21:42:19 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {
	
	private:
		std::string target;
		RobotomyRequestForm();

	public:
		RobotomyRequestForm( std::string _target);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm( const RobotomyRequestForm & src);
		RobotomyRequestForm & operator= (const RobotomyRequestForm & src);

		virtual void execute(Bureaucrat const &executor) const;
		virtual std::string getTarget(void) const;
};

#endif