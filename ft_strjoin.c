/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantana <bsantana@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:50:31 by bsantana          #+#    #+#             */
/*   Updated: 2023/11/08 13:54:40 by bsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		count_result;

	if (*s1 == '\0' && *s2 == '\0')
		return (ft_strdup(""));
	if (*s1 == '\0' && *s2)
		return (ft_strdup((char *)s2));
	if (*s1 && *s2 == '\0')
		return (ft_strdup((char *)s1));
	count_result = ft_strlen(s1) + ft_strlen(s2);
	result = malloc (count_result + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, ft_strlen(s1) + 1);
	ft_strlcat(result, s2, count_result + 1);
	return (result);
}
