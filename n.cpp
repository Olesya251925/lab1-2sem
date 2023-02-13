/**************************
* Лабораторная работа № 1 *
***************************/
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
        Power();
        break;

        case 2:
        SecondNum();
        break;
      }
    }

    static void Power(){
      Console.WriteLine("Программа 1- возведение в степень");

      Console.WriteLine("Введите число, которое нужно возвести в степень:");
      int Number = int.Parse(Console.ReadLine());
      Console.WriteLine("Введите Degree - степень числа:");
      int Degree = int.Parse(Console.ReadLine());

      if (Number < 1){
        Console.WriteLine("Ошибка. Число не является действительным числом.");
        Environment.Exit(0); //Досрочное прерывание программы
      }
      double Result = 1; // Результат возведения Number в степень Degree

      for (int IndexNumber = 0; IndexNumber < Degree; ++IndexNumber){
        Result *= Number;// Используем цикл для умножения Result на Number Degree раз 
      }

      Console.WriteLine("Number^Degree = " + Result);
      Console.ReadKey();
    }
    static void SecondNum(){
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

