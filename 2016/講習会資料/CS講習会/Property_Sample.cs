using System;

namespace property
{
    /*プロパティなし*/

    class Person　//人クラス
    {
        private string name;　//名前
        private int age; //年齢

        public Person(string n)
        {
            this.name = n;
            this.age = 0;
        }

        public string GetName() { return this.name; }　//名前のゲッター

        public int GetAge() { return this.age; } //年齢のゲッター

        public void SetAge(int a) //年齢のセッター
        {
            if (a >= 0) this.age = a; //エラー処理
        }
    }

    class Sample
    {
        public static void Main()
        {
            Person person = new Person("角田須");

            person.SetAge(2);

            Console.WriteLine("名前: {0} 年齢: {1}", person.GetName(), person.GetAge());
        }
    }

    /********************************************************************/

    /*プロパティあり*/

    /*class Person　//人クラス
    {
        public string Name { get; }　//get専用プロパティ
        private int age;

        public int Age
        {
            set { if (value >= 0) this.age = value; }
            get { return this.age; }
        }

        public Person(string n)
        {
            Name = n;
            age = 0;
        }
    }

    class Sample
    {
        public static void Main()
        {
            Person person = new Person("角田須");

            person.Age = 2;

            Console.WriteLine("名前: {0} 年齢: {1}", person.Name, person.Age);
        }
    }*/
}
