
# ls

* ls -p = differenciates dir from files
* ls -l = list permissions
* ls -al = list permission and hidden files

# chmod

-rwxr-x--x -> (1) me, (2) group, (3) others <br />
1. u - utilisator
2. g group
3. other

rwx - 421 -> 7 <br>

rwx rw- r-- 421 420 400 = 764


* chmod o+r test.txt -> add read to others
* chmod a-x test.txt -> remove from all the execute permission
* chmod g+w test.txt
* chmod 764 test.txt -> make permission like this: rwx rw- r--

# echo && cat 

* cat -e = look for extra info

# touch
modifies the last modified data from a file

* touch -t 201307150842 test.txt = modifie data of last access of file

# env and export
just write truc=abidule, that is it, you have and env <br />
echo $truc

put the variable in your environment
export

* env - shows all the environment variables
* export truc = puts the truc on env variable

# wc && metacharacters

* wc batman.txt testing.txt
* wc *.txt
* echo *.txt = the shell interprets the * and gives to echo the string of files
* echo t???.txt = ? = any character
* echo ~ = home

# more
* wc -l batman.txt = count lines
* more batman.txt = like man

# head
* head -n 2 test.txt = shows only first 2 lines
* head -c 9 test.txt = first 9 characters

# tail
* tail -n 2 test.txt
* tail -c 6 test.txt

# grep
* grep simple test.txt
* grep -v simple test.txt = search for all that do not contain the mn
* grep -i = insensitive case

# find
* find . = search all files in folder
* find . -name *.txt 
* find . -type d = search directories
* find . -maxdepth

# wc
* wc
* wc -l
* wc -w
* wc -c

# bc
calculator
* bc - enters menu - 7*7


# COMBINING 
* ls | grep txt
* ls bonjour 2 > error.log
* ls bonjour test* 2> error.log | grep test
