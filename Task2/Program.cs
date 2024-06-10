///TASK num3
///
using System;

class Program
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Введите набор 0 и 1:");
        string input = Console.ReadLine();

        try
        {
            // Проверяем, содержит ли строка только 0 и 1
            if (!input.All(c => c == '0' || c == '1'))
            {
                throw new ArgumentException("Неправильный ввод. Строка должна содержать только 0 и 1.");
            }

            // Преобразуем строку в двоичное число
            int decimalValue = Convert.ToInt32(input, 2);

            // Проверяем, не выходит ли число за пределы диапазона int
            if (decimalValue < int.MinValue || decimalValue > int.MaxValue)
            {
                throw new OverflowException("Число выходит за пределы диапазона int.");
            }

            Console.WriteLine("Десятичное представление: " + decimalValue);
        }
        catch (ArgumentException ex)
        {
            Console.WriteLine("Ошибка: " + ex.Message);
        }
        catch (OverflowException ex)
        {
            Console.WriteLine("Ошибка: " + ex.Message);
        }
        catch (FormatException ex)
        {
            Console.WriteLine("Ошибка: " + ex.Message);
        }
    }
}