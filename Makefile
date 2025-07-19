cc=gcc
bin=lain_in_ascii
flag=-Wall -static


install : compile
	cp ./lain.asc /etc/lain_in_ascii/lain.asc
	cp ./lain_in_ascii /usr/bin/lain_in_ascii


compile : $(bin)

$(bin) :  main.c /etc/lain_in_ascii/
	$(cc) $(flag)  main.c -o $@

/etc/lain_in_ascii/ :
	mkdir /etc/lain_in_ascii/


clean :
	-rm $(bin)

uninstall :
	-rm -rf /etc/lain_in_ascii/
	-rm /usr/bin/lain_in_ascii/
