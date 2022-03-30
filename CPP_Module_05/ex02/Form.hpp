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
		bool Signed;
		const int gradeSign;
		const int gradeExec;

	public:
		Form (std::string _name, int _grade);
		virtual ~Form();
		Form();
		Form (std::string _name, int grade1, int grade2);
		
		std::string getName (void) const;
		int getGradeSign(void) const;
    	int getGradeExecute() const;
		bool getIsSign(void) const;
		void setIsSigned(bool status);

		void beSigned(const Bureaucrat & src);

		Form & operator= ( const Form & src );

			
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
				 
		};

		class GradeTooHighException : public std::exception
		{
			public:
				 virtual const char* what() const throw(); 
		};

		class FormIsNotSigned : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		virtual void execute(Bureaucrat const & executor) const = 0;
		virtual std::string getTarget(void) const = 0;
};

std::ostream& operator << (std::ostream &out, const Form &point);

#endif