#!/bin/sh


if [ ! -z $1 ]; then 
	if [ $1 = "." ]; then
		echo "staging current dir"
		git add .
	else
		echo "staging the $1 files"
		git add "$1"
	fi
else
	echo "nothing to stage"

fi

echo 'Enter the commit message:'
read commitMessage

git commit -m "$commitMessage"

echo 'Enter the name of the branch:'
read branch

git push origin $branch

read
