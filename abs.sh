#!/bin/bash

read -p "Are you looking to build a test iso or a release iso? " answer

finished='0'
while [ finished != 1 ]; do
case $answer in
	test )
		if [ $? -ne 1 ]; then
			echo "okay, building test iso"
			bash /etc/abs/buildScripts/testBuild.sh
			finished='1'
		else
			exit
		fi
		;;
	release )
		echo "okay, build release iso"
		bash /etc/abs/buildScripts/releaseBuild.sh
		finished='1'
		;;
	* )
		echo "made no sense, try again"
		;;
esac
done