// ListSSP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define SECURITY_WIN32

#include <stdio.h>
#include <Windows.h>
#include <Security.h>

int main(int argc, char** argv) {
	ULONG packageCount = 0;
	PSecPkgInfoA packages;
	printf("Name,Comment,Capabilities,Version,RPCID\n");
	if ( EnumerateSecurityPackagesA(&packageCount, &packages) == SEC_E_OK) {
		for (unsigned int i = 0; i < packageCount; i++) {
			printf("%s,%s,%i,%i,%i\n", packages[i].Name, packages[i].Comment, packages[i].fCapabilities, packages[i].wVersion, packages[i].wRPCID);
		}
	}
	
}
