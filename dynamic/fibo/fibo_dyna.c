/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibo_dyna.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 07:07:20 by mirokugo          #+#    #+#             */
/*   Updated: 2024/11/28 07:07:42 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int fibo[44];
    fibo[0] = 1;
    fibo[1] = 1;

    int i;

    i = 2;
    while (i < 45)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        i++;
    }

    int n;

    scanf("%d", &n);
    printf("%d\n", fibo[n]);

    return 0;
}

void ft_
