#!/bin/bash

read -p "Are you looking to build a test iso or a release iso?" answer
while :; do
case $answer in
	test )
		echo "okay, building test iso"
		bash buildScripts/testBuild.sh
		;;
	release )
		echo "okay, build release iso"
		bash buildScripts/releaseBuild.sh
		;;
	* )
		echo "made no sense, try again"
		;;
esac
done
