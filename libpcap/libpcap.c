#include <stdio.h>
#include <pcap.h>

int main(int argc,char *argv[])
{ 
	char *dev;
	char errbuf[PCAP_ERRBUF_SIZE]; 
	
	dev=pcap_lookupdev(errbuf); 
	if(dev==NULL)
	{ 
		printf("couldn't find default device: %s\n", errbuf); 
		return(2); 
	} 
	
	printf("Device: %s\n",dev); 
	return(0); 
} 