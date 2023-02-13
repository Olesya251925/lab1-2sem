using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class Counter{
    int Choice;

    static void Main(string[] args) {
      Console.WriteLine("Введите 1- для возведения в степень, 2- для перестановки элемента");
      int Choice = int.Parse(Console.ReadLine());
      switch (Choice) {
        case 1:
        power();
        break;

        case 2:
        secondNum();
        break;
      }
    }

    static void power(){
      Console.WriteLine("Программа 1- возведение в степень");

      Console.WriteLine("Введите число, которое нужно возвести в степень:");
      int Number = int.Parse(Console.ReadLine());
      Console.WriteLine("Введите Degree - степень числа:");
      int Degree = int.Parse(Console.ReadLine());

      if (Number < 1){
        Console.WriteLine("Ошибка. Число не является действительным числом.");
        Environment.Exit(0); //Досрочное прерывание программы
      }
      double result = 1; // Результат возведения a в степень Degree

      for (int IndexNumber = 0; IndexNumber < Degree; ++IndexNumber){
        result *= Number;// Используем цикл для умножения result на a Degree раз 
      }

      Console.WriteLine("a^Degree = " + result);
      Console.ReadKey();
    }
    static void secondNum(){
      Console.WriteLine("Программа 2- перестановка второго элемента в конец");
      Console.WriteLine("Введите последовательность, которую нужно переобразовать:");

      int UneducatedX = int.Parse(Console.ReadLine());
      int ConvertedX = UneducatedX ;

      do {
        ConvertedX = ConvertedX / 10;

        if (ConvertedX < 100){
          do {
            ConvertedX = ConvertedX - 10;
          }
          while (ConvertedX > 10);
        }
      }
      while (ConvertedX > 100);

      int Degree = int.Parse(UneducatedX.ToString().Remove(1, 1) + ConvertedX); // Перестановка второй цифры в конец числа

      Console.WriteLine("Результат: " + Degree); // Вывод результат
    }
  }
}
