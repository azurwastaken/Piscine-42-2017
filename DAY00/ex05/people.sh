ldapsearch -Q -S cn "(uid=z*)" cn | grep "^cn:" | sort -rf | cut -b 5-
