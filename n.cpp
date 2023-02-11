using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class Counter{
    int choice;

    static void Main(string[] args) {
      Console.WriteLine("Введите 1- для возведения в степень, 2- для перестановки элемента");
      int choice = int.Parse(Console.ReadLine());
      switch (choice) {
        case 1:
        power();
        break;

        case 2:
        secondNum2End();
        break;
      }
    }

    static void power(){
      Console.WriteLine("Программа 1- возведение в степень");

      Console.WriteLine("Введите число a, которое нужно возвести:");
      int a = int.Parse(Console.ReadLine());
      Console.WriteLine("Введите n - степень числа:");
      int n = int.Parse(Console.ReadLine());

      if (a < 1){
        Console.WriteLine("Ошибка. Число а не является действительным числом.");
        Environment.Exit(0); //Досрочное прерывание программы
      }
      double result = 1; // Результат возведения a в степень n

      for (int index = 0; index < n; ++index){
        result *= a;// Используем цикл для умножения result на a n раз 
      }

      Console.WriteLine("a^n = " + result);
      Console.ReadKey();
    }
    static void secondNum2End(){
      Console.WriteLine("Введите последовательность x:");

      int x = int.Parse(Console.ReadLine());
      int workX = x;

      do {
        workX = workX / 10;

        if (workX < 100){
          do {
            workX = workX - 10;
          }
          while (workX > 10);
        }
      }
      while (workX > 100);

      int n = int.Parse(x.ToString().Remove(1, 1) + workX); // Перестановка второй цифры в конец числа

      Console.WriteLine("Результат: " + n); // Вывод результат
    }
  }
}
