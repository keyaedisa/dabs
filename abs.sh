#!/bin/bash

source misc/.bashFormatting

echo $fgMagenta&&xUnicode 2730 49&&echo $txReset
read -p "Are you looking to build a ${fgCyan}${txUnderline}test${txReset} iso or a ${fgCyan}${txUnderline}release${txReset} iso? " answer
echo $fgMagenta&&xUnicode 2730 49&&echo $txReset

finished='0'
while [ finished != 1 ]; do
case $answer in
	test | Test )
		echo "Oki, building ${fgCyan}test${txReset} iso"
		finished='1'
		bash /etc/abs/buildScripts/testBuild.sh && exit
		;;
	release | Release )
		echo "Oki, building ${fgCyan}release${txReset} iso"
		finished='1'
		bash /etc/abs/buildScripts/releaseBuild.sh && exit
		;;
	* )
		echo "Made no sense. Enter ${fgCyan}${txUnderline}test${txReset} or ${fgCyan}${txUnderline}release${txReset}"
		read -p "Are you looking to build a ${fgCyan}${txUnderline}test${txReset} iso or a ${fgCyan}${txUnderline}release${txReset} iso? " answer
		;;
esac
done
