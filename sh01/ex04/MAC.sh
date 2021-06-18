# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    MAC.sh                                             :+:    :+:             #
#                                                      +:+                     #
#    By: areintha <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2021/06/15 15:32:08 by areintha      #+#    #+#                  #
#    Updated: 2021/06/15 15:32:11 by areintha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
ifconfig | grep "ether " | awk '{print $2}'
#ifconfig displace info about network adapters
# grep filters any lines that don't have "ether "
# awk prints only the second column 
