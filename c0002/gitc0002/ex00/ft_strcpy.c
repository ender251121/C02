/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:15:49 by enalvare          #+#    #+#             */
/*   Updated: 2023/08/30 01:50:23 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
	dest[n] = src[n];
	n++;
	}
	dest[n] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	a[20] = "copiar texto";
	char	b[20] = "";

	ft_strcpy(b, a);
	printf("%s", b);
	return (0);
}*/
