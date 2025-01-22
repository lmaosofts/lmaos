#!/bin/bash
# RUN ME ON LINUX

rm lmaos > /dev/null
gcc lmaos.c -o lmaos
if [ -f lmaos ]; then
	chmod +x lmaos
	# chmod just in case lmfao
	./lmaos
fi