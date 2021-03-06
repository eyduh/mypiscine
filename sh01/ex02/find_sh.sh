# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    find_sh.sh                                         :+:    :+:             #
#                                                      +:+                     #
#    By: areintha <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2021/06/15 15:30:09 by areintha      #+#    #+#                  #
#    Updated: 2021/06/16 16:35:49 by areintha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
find . | grep "\.sh" | awk -F/ '{print $NF}' | cut -f 1 -d '.'

# find does recursively look for everything from .
# grep filters out lines that do not have .sh in them
#awk sets teh field separator to / and only prints the last fieldfind
#cut sets teh delimiter as . and only prints the first 
#I could do the last two eith eitehr cut or awk but chose both c;
