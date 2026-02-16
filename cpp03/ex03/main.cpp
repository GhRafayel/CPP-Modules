/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:01:05 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/28 16:01:07 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
int main()
{
    std::cout << "=== Creating DiamondTrap ===\n";
    DiamondTrap diamond("Sparkle");
    
    std::cout << "\n=== Testing whoAmI() ===\n";
    diamond.whoAmI();
    
    std::cout << "\n=== Testing attack function (from ScavTrap) ===\n";
    diamond.attack("enemy robot");
    
    std::cout << "\n=== Testing damage and repair ===\n";
    diamond.takeDamage(25);
    diamond.beRepaired(10);
    
    std::cout << "\n=== Testing FragTrap special function ===\n";
    diamond.highFivesGuys();
    
    std::cout << "\n=== Testing ScavTrap special function ===\n";
    diamond.guardGate();
    
    std::cout << "\n=== Testing multiple attacks to check energy points ===\n";
    for (int i = 0; i < 3; i++) {
        diamond.attack("target practice");
    }
    
    std::cout << "\n=== Final whoAmI() check ===\n";
    diamond.whoAmI();
    
    std::cout << "\n=== End of main - destructors should be called ===\n";

    ClapTrap* dia = new DiamondTrap();
    delete dia;
    return 0;
}
