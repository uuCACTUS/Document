using System;


namespace CsStudy
{
    class check2_2
    {
        // nの階乗を表示するプログラム
        static void Main()
        {
            // nの入力
            Console.WriteLine("What factrial?");
            int n = int.Parse(Console.ReadLine());

            // インスタンスの生成
            calculator Taniguchi = new calculator(n);

            // 結果の出力
            Console.WriteLine("The factrial of {0} is {1}", n, Taniguchi.Ans);
        }
        
    }

    // 階乗の計算を行うクラス
    class calculator
    {
        // 計算結果を入れておくプロパティ
        public int Ans { get; }

        // コンストラクタ
        public calculator() { this.Ans = 1; }
        public calculator(int n) {
            Ans = 1;
            for(int i = 1; i <= n; i++)
            {
                this.Ans *= i;
            }
        }
    }
}
