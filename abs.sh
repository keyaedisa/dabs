#!/bin/bash

source misc/.bashFormatting

read -p "Are you looking to build a ${fgCyan}${txUnderline}test${txReset} iso or a ${fgCyan}${txUnderline}release${txReset} iso? " answer

finished='0'
while [ finished != 1 ]; do
case $answer in
	test )
		echo "Oki, building ${fgCyan}test${txReset} iso"
		finished='1'
		bash /etc/abs/buildScripts/testBuild.sh && exit
		;;
	release )
		echo "Oki, building ${fgCyan}release${txReset} iso"
		finished='1'
		bash /etc/abs/buildScripts/releaseBuild.sh && exit
		;;
	* )
		echo "Made no sense. Enter ${fgCyan}${txUnderline}test${txReset} or ${fgCyan}${txUnderline}release${txReset}"
		;;
esac
done
