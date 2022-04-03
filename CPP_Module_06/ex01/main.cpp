/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:05:03 by bprovolo          #+#    #+#             */
/*   Updated: 2022/04/03 19:21:18 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
    std::string name;
    int age;
};

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

int main ()
{
	Data *structBob = new Data();
	
	structBob->age = 32;
	structBob->name = "Test";
    uintptr_t raw;
    Data *ptr;

    std::cout << "\nstructBob ADRESS " << structBob << std::endl;
    std::cout << "structBob age " << structBob->age << std::endl;
    std::cout << "structBob name " << structBob->name << std::endl;

	std::cout << "\n=======  called serialize ======= "  << std::endl;
	raw = serialize(structBob);
    std::cout << "ADRESS Raw = " << &raw << std::endl;
    std::cout << "DATA Raw = " << raw << std::endl;

	std::cout << "\n======= called deserialize ======= "  << std::endl;
    ptr = deserialize(raw);
 	std::cout << "ptr ADRESS " << ptr << std::endl;
    std::cout << "ptr age " << ptr->age << std::endl;
    std::cout << "ptr name " << ptr->name << std::endl;
	
	delete structBob;
	return 0;
}
