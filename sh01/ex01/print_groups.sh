#!/bin/sh
groups $FT_USER | sed -e ``s/ /,/g''
