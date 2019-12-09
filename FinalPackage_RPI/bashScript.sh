#!/bin/bash
PASSWD=kapilrocks
node myapi > gpio.txt #Saving the text file to the PI
sshpass -p "$PASSWD" scp -i /home/pi/.ssh/id_rsa pi@10.248.101.41:/home/pi/rpi-webapp-gpio/gpio.txt aa4338@dwslgrid.ece.drexel.edu:/userhomes/aa4338
