#!/bin/bash

INPUT=$(zenity --forms --title="Add contest" \
	--text="Enter information about contest." \
	--separator="," \
	--add-entry="Contest ID/No" \
	--add-entry="Division (1 or 2)")
accepted=$?
if (($accepted != 0)); then
    echo "something went wrong"
    exit 1
fi
contest=$(awk -F, '{print $1}'<<<$INPUT)
division=$(awk -F, '{print $2}'<<<$INPUT);

mkdir "$1/CodeForces Round $contest Div $division"
mkdir "$1/CodeForces Round $contest Div $division/A"
mkdir "$1/CodeForces Round $contest Div $division/B"
mkdir "$1/CodeForces Round $contest Div $division/C"
mkdir "$1/CodeForces Round $contest Div $division/D"
mkdir "$1/CodeForces Round $contest Div $division/E"

cp "$1/Templates/template.cpp" "$1/CodeForces Round $contest Div $division/A/A.cpp"
cp "$1/Templates/template.cpp" "$1/CodeForces Round $contest Div $division/B/B.cpp"
cp "$1/Templates/template.cpp" "$1/CodeForces Round $contest Div $division/C/C.cpp"
cp "$1/Templates/template.cpp" "$1/CodeForces Round $contest Div $division/D/D.cpp"
cp "$1/Templates/template.cpp" "$1/CodeForces Round $contest Div $division/E/E.cpp"