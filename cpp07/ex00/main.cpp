/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:53:44 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/19 13:53:45 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"


int main(void)
{
	{
		std::cout << "============================== start of int =============================" << std::endl;
		int a = 7;
		int b = 5;

		std::cout << " a > " << a << std::endl << " b > " << b << std::endl;
		int res1 = min(a, b); // 5
		int res2 = max(a, b); // 7

		std::cout << "res1 > " << res1 << std::endl <<  "res2 > " << res2 << std::endl;

		swap(a, b);
		std::cout << "after swap " << std::endl;
		std::cout << "a > " << a << std::endl << "b > " << b << std::endl;

		int res3 = min(a, b); // 7
		int res4 = max(a, b); // 5
		std::cout << "res3 > " << res3 << std::endl << "res4 > " << res4 << std::endl;
		std::cout << "============================== end of int =============================\n" << std::endl;
	}

	{
		std::cout << "============================== start of float =============================" << std::endl;
		float a = 7.7f;
		float b = 5.5f;

		std::cout << " a > " << a << std::endl << " b > " << b << std::endl;
		float res1 = min(a, b); // 5.5f
		float res2 = max(a, b); // 7.7f

		std::cout << "res1 > " << res1 << std::endl <<  "res2 > " << res2 << std::endl;

		swap(a, b);
		std::cout << "after swap " << std::endl;
		std::cout << "a > " << a << std::endl << "b > " << b << std::endl;

		float res3 = min(a, b); // 7.7f
		float res4 = max(a, b); // 5.5f
		std::cout << "res3 > " << res3 << std::endl << "res4 > " << res4 << std::endl;
		std::cout << "============================== end of float =============================\n" << std::endl;
	}

	{
		std::cout << "============================== start of double =============================" << std::endl;
		double a = 7.7;
		double b = 5.5;

		std::cout << " a > " << a << std::endl << " b > " << b << std::endl;
		double res1 = min(a, b); // 5.5
		double res2 = max(a, b); // 7.7

		std::cout << "res1 > " << res1 << std::endl <<  "res2 > " << res2 << std::endl;

		swap(a, b);
		std::cout << "after swap " << std::endl;
		std::cout << "a > " << a << std::endl << "b > " << b << std::endl;

		double res3 = min(a, b); // 7.7
		double res4 = max(a, b); // 5.5
		std::cout << "res3 > " << res3 << std::endl << "res4 > " << res4 << std::endl;
		std::cout << "============================== end of double =============================\n" << std::endl;
	}

	{
		std::cout << "============================== start of char =============================" << std::endl;
		char a = 77;
		char b = 76;

		std::cout << " a > " << a << std::endl << " b > " << b << std::endl;
		char res1 = min(a, b); // 76
		char res2 = max(a, b); // 77

		std::cout << "res1 > " << res1 << std::endl <<  "res2 > " << res2 << std::endl;

		swap(a, b);
		std::cout << "after swap " << std::endl;
		std::cout << "a > " << a << std::endl << "b > " << b << std::endl;

		char res3 = min(a, b); // 77
		char res4 = max(a, b); // 76
		std::cout << "res3 > " << res3 << std::endl << "res4 > " << res4 << std::endl;
		std::cout << "============================== end of char =============================\n" << std::endl;
	}
	{
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return 0;
}

/* last test result should be like this
	a = 3, b = 2
	min(a, b) = 2
	max(a, b) = 3
	c = chaine2, d = chaine1
	min(c, d) = chaine1
	max(c, d) = chaine2
*/