/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                   	    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:32:40 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/29 20:18:24 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	
	private:
		const std::string name;
		const int gradeSign;
		const int gradeExec;
		bool Signed;

	public:
		Form (std::string _name, int _grade);
		~Form();
		Form();
		Form (std::string _name, int grade1, int grade2);
		
		std::string getName (void) const;
		int getGradeSign(void) const;
		void setGrade(int grade);

		void beSigned(const Bureaucrat & src);

		Form & operator= ( const Form & src );
	    Form& operator++();
   		Form& operator--();
			
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

std::ostream& operator << (std::ostream &out, const Form &point);

#endif