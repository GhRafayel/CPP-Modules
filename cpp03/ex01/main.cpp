/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:58:22 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/28 15:58:23 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== CONSTRUCTION TESTS ===" << std::endl;
    
    ScavTrap scav1;
    std::cout << std::endl;
    
    ScavTrap scav2("Guardian");
    std::cout << std::endl;
    
    ScavTrap scav3(scav2);
    std::cout << std::endl;
    
    std::cout << "\n=== ATTACK TESTS ===" << std::endl;
    scav2.attack("Enemy Robot");
    scav1.attack("Training Dummy");
    std::cout << std::endl;
    
    std::cout << "\n=== SPECIAL ABILITY TESTS ===" << std::endl;
    scav2.guardGate();
    scav1.guardGate();
    std::cout << std::endl;
    
    std::cout << "\n=== ENERGY AND HEALTH TESTS ===" << std::endl;
    scav2.takeDamage(30);
    scav2.beRepaired(15);
    scav2.attack("Another Enemy");
    std::cout << std::endl;
    
    std::cout << "\n=== MULTIPLE ATTACKS TESTS ===" << std::endl;
    // Simple approach without string conversion
    for (int i = 0; i < 50; i++)
    {
        scav1.attack("Dima");
    }
    scav1.takeDamage(100);
    scav1.beRepaired(20);
    
    
    std::cout << std::endl;
    
    std::cout << "\n=== ASSIGNMENT OPERATOR TEST ===" << std::endl;
    ScavTrap scav4;
    scav4 = scav2;
    scav4.attack("Assigned Target");
    std::cout << std::endl;
    
    std::cout << "\n=== DESTRUCTION TESTS ===" << std::endl;
    return 0;
}
