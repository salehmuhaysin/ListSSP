# ListSSP
List Security Support Provider (SSP) 


# Introuction

lsass.exe process support adding Security Support Provider (SSP) to allow adding some handler for specific authentications. Here we care mostly about assigning a custom SSP to lsass.exe process to monitor and steal credentials when user authenticate their credentials.

# Usage

Just run the ListSSP.exe binary
```
cmd-line>.\ListSSP.exe
Name,Comment,Capabilities,Version,RPCID
Negotiate,Microsoft Package Negotiator,8928179,1,9
NegoExtender,NegoExtender Security Package,9517331,1,30
Kerberos,Microsoft Kerberos V1.0,42941375,1,16
NTLM,NTLM Security Package,42478391,1,10
TSSSP,TS Service Security Package,8454704,1,22
pku2u,PKU2U Security Package,10555667,1,31
CloudAP,Cloud AP Security Package,2105344,1,36
WDigest,Digest Authentication for Windows,8389380,1,21
Schannel,Schannel Security Package,4261811,1,14
Microsoft Unified Security Protocol Provider,Schannel Security Package,4261811,1,14
Default TLS SSP,Schannel Security Package,4261811,1,14
```
