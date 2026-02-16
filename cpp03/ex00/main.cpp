/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:56:23 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/28 15:56:25 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::cout << "=== Testing ClapTrap ===" << std::endl;
    
    // Test 1: Default constructor
    std::cout << "\n--- Test 1: Default Constructor ---" << std::endl;
    ClapTrap clap1;
    
    
    // Test 2: Parameterized constructor
    std::cout << "\n--- Test 2: Parameterized Constructor ---" << std::endl;
    ClapTrap clap2("Clappy");
    
    // Test 3: Copy constructor
    std::cout << "\n--- Test 3: Copy Constructor ---" << std::endl;
    ClapTrap clap3 = clap2; // mistake 
    
    // Test 4: Copy assignment
    std::cout << "\n--- Test 4: Copy Assignment ---" << std::endl;
    ClapTrap clap4;
    clap4 = clap2;
    
    // Test 5: Attack function
    std::cout << "\n--- Test 5: Attack Function ---" << std::endl;
    clap2.attack("Target1");
    clap3.attack("Target2");
    
    // Test 6: Take damage
    std::cout << "\n--- Test 6: Take Damage ---" << std::endl;
    clap2.takeDamage(5);
    clap3.takeDamage(3);
    
    // Test 7: Be repaired
    std::cout << "\n--- Test 7: Be Repaired ---" << std::endl;
    clap2.beRepaired(2);
    clap3.beRepaired(4);
    
    // Test 8: Energy consumption
    std::cout << "\n--- Test 8: Energy Consumption ---" << std::endl;
    for (int i = 0; i < 12; i++) 
    {
        clap2.attack("EnergyTest");
    }
    
    // Test 9: No hit points left
    std::cout << "\n--- Test 9: No Hit Points ---" << std::endl;
    ClapTrap clap5("WeakTrap");
    clap5.takeDamage(15); // Should reduce to 0 HP
    clap5.attack("ShouldFail"); // Should not work
    clap5.beRepaired(5); // Should not work
    
    // Test 10: Edge cases
    std::cout << "\n--- Test 10: Edge Cases ---" << std::endl;
    clap2.takeDamage(100); // Massive damage
    clap2.beRepaired(100); // Massive repair (but should fail due to no HP)
    
    std::cout << "\n=== End of Tests ===" << std::endl;
    
    return 0;
}
