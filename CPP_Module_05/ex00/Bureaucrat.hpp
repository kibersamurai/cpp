/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:32:40 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/29 20:18:24 by bprovolo         ###   ########.fr       */
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

		Bureaucrat & operator= ( const Bureaucrat & src );
	    Bureaucrat& operator++();
   		Bureaucrat& operator--();
			
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

std::ostream& operator << (std::ostream &out, const Bureaucrat &point);

#endif