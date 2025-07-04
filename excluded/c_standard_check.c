/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_standard_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-04 09:40:39 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-04 09:40:39 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Sources:
1. https://blog.finxter.com/the-one-best-way-to-check-your-c-version/#:~:text=Identifying%20C%20Standard,the%20__STDC_VERSION__%20macro.
*/

#include <stdio.h>
int main() {
    printf("%ld\n", __STDC_VERSION__);
    return 0;
}
