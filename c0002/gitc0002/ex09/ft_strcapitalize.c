/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:44:12 by enalvare          #+#    #+#             */
/*   Updated: 2023/08/29 21:11:27 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str [i] + 32;
	else
			i++;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i -1] >= 'a' && str[i -1] <= 'z')
				|| (str[i -1] >= '0' && str[i -1] <= '9')
				|| (str[i -1] >= 'A' && str[i -1] <= 'Z'))
				str[i] = str[i];
			else
				str[i] = str[i] - 32;
		}
	i++;
	}
	return (str);
}	

/*int	main(void)
{
	char	s1[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(s1);
	printf("%s", s1);
	return (0);
}*/
