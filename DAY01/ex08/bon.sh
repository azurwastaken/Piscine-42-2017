ldapsearch -Q -S -LLL sn | grep "^sn" | cut -c 5- | grep "bon" | wc -l | tr -d "\t\r" | sed "s/ //g"
