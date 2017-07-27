cat contacts_easy.txt | grep -i "nicolas" | grep -i "bauer" | sed '4d' | grep -o '\(([0-9]\{3\})\|[0-9]\{3\}\)[ -]\?[0-9]\{3\}[ -]\?[0-9]\{4\}'
