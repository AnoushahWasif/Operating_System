echo Enter a number
read num1
echo Enter a number
read num2
echo Lets check which number is greater from $((num1)) and $((num2)) 
if ((num1>num2))
then
echo $((num1)) is greater
else
echo $((num2)) is greater
fi
