#!/bin/sh
printf "Enter the name of video: "
read name
printf "Start recording (y/n): "
read start
dim=$(xdpyinfo | awk '/dimensions/{print $2}')
if [ $start = 'y' ]; then
	ffmpeg -f x11grab -y -framerate 30 -s $dim -i :0.0 -c:v libx264 -preset superfast -crf 18 $name.mp4
fi

