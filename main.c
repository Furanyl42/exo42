/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@mail.be>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 21:48:31 by user              #+#    #+#             */
/*   Updated: 2026/07/29 21:23:09 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char c);
void	ft_ft(int *nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
int	ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strdup(char *src);

int	main(void)
{
	char	*str_originale = "Hello, 42 Brussels!";
	char	*copie_vrai;
	char	*copie_ft;

	// 1. Test avec la fonction officielle
	copie_vrai = strdup(str_originale);

	// 2. Test avec TA fonction
	copie_ft = ft_strdup(str_originale);

	// 3. Affichage des résultats
	printf("Originale : %s\n", str_originale);
	printf("Vrai strdup : %s (adresse: %p)\n", copie_vrai, (void *)copie_vrai);
	printf("Ta ft_strdup: %s (adresse: %p)\n", copie_ft, (void *)copie_ft);

	// 4. IMPORTANT : Toujours libérer la mémoire allouée dynamiquement !
	free(copie_vrai);
	free(copie_ft);

	return (0);
}
