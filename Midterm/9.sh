read -p "Enter 1st value:" num1
read -p "Enter 2nd value:" num2


if (($num1 || $num2))
then
echo "OR gate: 1"
else
echo "OR gate: 0"
fi
