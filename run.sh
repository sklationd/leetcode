if [ $1 ]; then
	mkdir $1
	cd $1
	code $1.cpp
else
	echo "please type name of the problem"
fi
