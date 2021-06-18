# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    print_groups.sh                                    :+:    :+:             #
#                                                      +:+                     #
#    By: areintha <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2021/06/15 15:28:07 by areintha      #+#    #+#                  #
#    Updated: 2021/06/16 20:39:19 by areintha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
groups $FT_USER | sed -e "s+ +,+g" | tr -d "\n"  

#groups outputs the group of the user specified or of whoami if none specified
#sed -e takes a regular subsitution expression and does that
# s means substitute
# spaces with , | globally
# apparently sed can take any delimiters, I used | to test this and it is true
# tr translates all newlines into nothingness with the -d flag
# I used | head -c -1 before which works on linux but not BSD derivs like macOS
