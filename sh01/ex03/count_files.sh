# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    count_files.sh                                     :+:    :+:             #
#                                                      +:+                     #
#    By: areintha <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2021/06/15 15:27:58 by areintha      #+#    #+#                  #
#    Updated: 2021/06/15 15:28:00 by areintha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
find . -type f -o -type d | wc -l | tr -ds ' ' ''
#find in . (. inclusive)
##match files and directories
#wc -l counts the amounts of lines, but outputs this ugly thing with empty space
#tr -ds replaces the first thing, spaces, with the secodn thing, nothing.
