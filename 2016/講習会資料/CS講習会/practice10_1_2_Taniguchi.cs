using System;
using System.IO;
using System.Linq;

namespace CsStudy
{
    // ある倍数だけ抜き出したファイルを出力するプログラム
    class practice10_1_2
    {
        static void Main()
        {
            // testディレクトリの作成
            if (!Directory.Exists("test")) Directory.CreateDirectory("test");

            // ファイル名の入力
            Console.WriteLine("input file name");
            string fname = $@"test/{Console.ReadLine()}.csv";
            
            // ファイルが存在していた場合
            if (File.Exists(fname))
            {
                // 倍数の指定
                Console.WriteLine("What number of Multiples ?");
                int n = int.Parse(Console.ReadLine());

                using (StreamWriter w = new StreamWriter(@"test/result.csv"))
                {
                    using (StreamReader r = new StreamReader(fname))
                    {
                        while (!r.EndOfStream)
                        {
                            // 一行読み込み
                            var line = r.ReadLine();
                            // カンマごとに区切る
                            var items = line.Split(',');

                            var MultiResult = from value in items
                                              where value != "" && int.Parse(value) % n == 0
                                              select value;

                            // 指定した倍数ならresultに書き込み
                            foreach (var item in MultiResult)
                            {
                                w.Write(item + ",");
                            }

                            /* foreach (var item in items)
                            {
                                if (item != "")
                                {
                                    // 指定した倍数ならresultに書き込み
                                    if (int.Parse(item) % n == 0) w.Write(item + ",");
                                }
                            } */
                        }
                    }
                }
            }else{ // ファイルが存在しない場合

                Console.WriteLine($"\"{fname}\" not found. Create new file \"{fname}\".");

                // 乱数シードを設定
                Random rand = new Random((int)DateTime.Now.Ticks % int.MaxValue);

                using (StreamWriter w = new StreamWriter(fname))
                {
                    for (int i = 0; i < 5; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            // カンマ区切りで計15個0～100の数字を書き込む
                            w.Write($"{rand.Next(0, 101)},");
                        }
                        w.WriteLine();
                    }
                }
            }
        }
    }
}
