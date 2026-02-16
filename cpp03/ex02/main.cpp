/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:22:35 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/28 15:59:16 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    std::cout << "=== Testing FragTrap ===" << std::endl;
    
    // Test 1: Default constructor
    std::cout << "\n--- Test 1: Default Constructor ---" << std::endl;
    FragTrap frag1;
    
    // Test 2: Parameterized constructor
    std::cout << "\n--- Test 2: Parameterized Constructor ---" << std::endl;
    FragTrap frag2("FragMaster");
    
    // Test 3: Copy constructor
    std::cout << "\n--- Test 3: Copy Constructor ---" << std::endl;
    FragTrap frag3 = frag2;
    
    // Test 4: Copy assignment
    std::cout << "\n--- Test 4: Copy Assignment ---" << std::endl;
    FragTrap frag4;
    frag4 = frag2;
    
    // Test 5: High five function
    std::cout << "\n--- Test 5: High Five Function ---" << std::endl;
    frag2.highFivesGuys();
    frag3.highFivesGuys();
    
    // Test 6: Attack and take damage
    std::cout << "\n--- Test 6: Combat Testing ---" << std::endl;
    frag2.attack("TargetDummy");
    frag3.takeDamage(20);
    frag3.beRepaired(10);

    frag3.takeDamage(200);
    frag3.beRepaired(10);

    
    // Test 7: Energy consumption
    std::cout << "\n--- Test 7: Energy Testing ---" << std::endl;
    for (int i = 0; i < 5; i++) {
        frag2.attack("EnergyTest");
    }
    
    std::cout << "\n=== End of Tests ===" << std::endl;
    ClapTrap *a = new FragTrap();
    delete a;
    return 0;
}
