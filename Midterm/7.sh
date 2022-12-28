echo Enter a number
read num1
echo Enter a number
read num2
echo Lets check if two numbers equal from $((num1)) and $((num2)) 
if ((num1==num2))
then
echo $((num1)) and $((num2)) are equal
else
echo $((num1)) and $((num2)) are not equal
fi
