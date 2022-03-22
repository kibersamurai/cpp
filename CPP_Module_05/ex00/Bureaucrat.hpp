/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:32:40 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/22 20:28:42 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
	
	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat (std::string _name, int _grade);
		~Bureaucrat();
		Bureaucrat();
		
		std::string getName (void) const;
		int getGrade(void) const;
		void setGrade(int grade);
		
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
				 
		};

		class GradeTooHighException : public std::exception
		{
			public:
				 const char* what() const throw(); 
		};
};

#endif