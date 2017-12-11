ARR=(12 12 19 28 18 19 12 14 18 9 10 12)
chapter=12
for((i=1;i<=chapter;i++));do

	 mkdir Chap"$chapter"c
for((i=0;i<ARR[$chapter];i++));do

	mkdir Chap"$chapter"c/P"$chapter"-"$ARR"
        touch "$chapter"c/P"$chapter"-"$ARR"/内容.txt



done
done
