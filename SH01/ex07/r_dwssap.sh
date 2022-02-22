FT_LINE1=1
FT_LINE2=7


cat /etc/passwd | cut -f1 -d":" | rev | awk "NR % 2 == 1" | awk -v FT_LINE1=$FT_LINE1 -v FT_LINE2=$FT_LINE2  "NR > FT_LINE1 && NR < FT_LINE2" | tr "\n" "," | sed 's/,/, /g' | rev | cut -c 3- | rev | sed 's/$/./' | tr -d "\n"

