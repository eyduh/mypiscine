# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Comp                                               :+:    :+:             #
#                                                      +:+                     #
#    By: areintha <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2021/06/05 14:34:57 by areintha      #+#    #+#                  #
#    Updated: 2021/06/05 15:05:24 by areintha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#/bin/sh
# a script to list c src files and ask which one to compile

clear 	 									#clear the window
ls *.c										#list c files
echo "compile what? do not include .c"		#ask user for input
read name								#reads user input into variable name
gcc -W -Wall -Werror -o "${name}" "$name".c	#compiles with moulinette flags
