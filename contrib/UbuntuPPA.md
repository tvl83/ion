Add any ppa:
sudo add-apt-repository 'deb uri distribution [component1] [component2] [...]' 
or
sudo add-apt-repository ppa:<ppa_name>

# How to add repository

### Example For 17.04 and xenial ppa
```
sudo add-apt-repository 'deb http://ppa.launchpad.net/ionomy/ioncoin/ubuntu xenial main' 
```

# add your gpg key to any keyserver
```
sudo apt-key adv --recv-keys --keyserver keyserver.ubuntu.com D46F45428842CE5E

# or sha256 sum
sudo apt-key adv --recv-keys --keyserver keyserver.ubuntu.com SHA256:nThbg6kXUpJWGl7E1IGOCspRomTxdCARLviKw6E5SY8
```

### Zesty (17.04)
```
deb http://ppa.launchpad.net/ionomy/ioncoin/ubuntu zesty main 
deb-src http://ppa.launchpad.net/ionomy/ioncoin/ubuntu zesty main 
```

### Yakkety (16.10)
```
deb http://ppa.launchpad.net/ionomy/ioncoin/ubuntu yakkety main 
deb-src http://ppa.launchpad.net/ionomy/ioncoin/ubuntu yakkety main 
```

### Xenial (16.04)
```
deb http://ppa.launchpad.net/ionomy/ioncoin/ubuntu xenial main 
deb-src http://ppa.launchpad.net/ionomy/ioncoin/ubuntu xenial main 
```

### Trusty (14.04)
```
deb http://ppa.launchpad.net/ionomy/ioncoin/ubuntu trusty main 
deb-src http://ppa.launchpad.net/ionomy/ioncoin/ubuntu trusty main 
```

### Precise (12.04)
```
deb http://ppa.launchpad.net/ionomy/ioncoin/ubuntu precise main 
deb-src http://ppa.launchpad.net/ionomy/ioncoin/ubuntu precise main 
```

`sudo add-apt-repository ppa:ionomy/ioncoin`



# how to remove PPA
`sudo apt-add-repository --remove ppa:ionomy/ioncoin`
