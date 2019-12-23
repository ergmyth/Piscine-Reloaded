ifconfig -a link | grep ether | cut -c 8- | sed 's/.$//'
