# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    skip.sh                                            :+:    :+:             #
#                                                      +:+                     #
#    By: areintha <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2021/06/16 20:42:22 by areintha      #+#    #+#                  #
#    Updated: 2021/06/16 20:42:25 by areintha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
ls -l | awk 'NR%2==1'
#list in list format
#awk sets NR number lines to show every second one
#awk starting from the first
