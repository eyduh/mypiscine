# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Comp_all                                           :+:    :+:             #
#                                                      +:+                     #
#    By: areintha <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2021/06/05 14:35:27 by areintha      #+#    #+#                  #
#    Updated: 2021/06/05 14:54:58 by areintha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#/bin/sh

clear && \								#clears and goes into loop
for i in *.c;							#for variable i in all c files
	do gcc -W -Wall -Werror -o "${i%.*}" "$i" ;
done
# sh for loops go "for i in list" i = NAME, this makes the file name the var i
# list = all .c files in directory
# "${i%.*} takes the string i and removes anything after the . & the . of var i
# "$i" takes the var i. the quotes allow for file names with spaces
