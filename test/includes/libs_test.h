/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libs_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 14:03:42 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/08 16:57:11 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void ft_bzero(char *str, size_t len);
int ft_isalpha(int c);
int ft_toupper(int c);

void test_isalpha(void);
void test_bzero(void);
void test_toupper(void);
