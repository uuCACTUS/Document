using System;


namespace CsStudy
{
    class check3_1
    {
        // 2教科の合計と平均を表示するプログラム
        static void Main()
        {
            // 各教科の点数を引数にインスタンスの生成
            subject english = new subject(57, 80, 61, 77, 45);
            subject japanese = new subject(83, 53, 45, 31, 58);

            // 結果の出力
            Console.WriteLine("英語の合計点は{0}点,平均は{1}点", english.GetSum(), english.GetAve());
            Console.WriteLine("国語の合計点は{0}点,平均は{1}点", japanese.GetSum(), japanese.GetAve());

        }
    }

    // 教科のクラス
    class subject
    {
        // 教科の点数を入れておく配列
        private int[] point;

        // コンストラクタ
        public subject(params int[] p)
        {
            point = p;
        }

        // 点数の合計値を返すメソッド
        public int GetSum()
        {
            int s = 0;
            foreach(int i in point)
            {
                s += i;
            }
            return s;
        }

        // 点数の平均を返すメソッド
        public double GetAve()
        {
            return (double)(GetSum() / point.Length);
        }
    }
}
