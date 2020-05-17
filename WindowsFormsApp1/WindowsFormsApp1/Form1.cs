using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public class Сrossword
        {
            public string indexName;               //Порядковый номер кроссворда
            public string name;                    //Описание картинки
            public string imageLocation;           //Путь к файлу иконки
            public List<string> numbersShipTop;    //Список для заполнения верхней панели цифрами для кроссворда
            public List<string> numbersShipLeft;   //Список для заполнения левой боковой панели цифрами для кроссворда
            public List<int> controlsTabIndexes;   //Список индексов логических элементов, у которых свойство BackColor должно быть равно Black
                                                   //(используется для проверки на победу)
            public Сrossword(string indexName, string name, string imageLocation, List<string> numbersShipTop, 
                            List<string> numbersShipLeft, List<int> controlsTabIndexes) 
            {
                this.indexName = indexName;
                this.name = name;
                this.imageLocation = imageLocation;
                this.numbersShipTop = numbersShipTop;
                this.numbersShipLeft = numbersShipLeft;
                this.controlsTabIndexes = controlsTabIndexes;
            }

        }

        Сrossword ship = new Сrossword("Кроссворд №1",
                                       "Кораблик", 
                                       @"C:\\ship.jpg",
                                       new List<string>()
                                       {
                                           " ", " ", " ", " ", " ", "5", "4", "3", " ", " ",
                                           "2", "1", "1", "1", "8", "1", "1", "1", "2", "1",
                                           "1", "2", "1", "1", "1", "1", "1", "1", "2", "1",
                                       },
                                       new List<string>()
                                       {
                                           " ", "2", "1",
                                           " ", "1", "2",
                                           " ", " ", "3",
                                           " ", " ", "4",
                                           " ", " ", "5",
                                           " ", " ", "6",
                                           " ", " ", "1",
                                           " ", " ", "10",
                                           " ", "1", "1",
                                           " ", " ", "6",
                                       },
                                       new List<int>()
                                       { 
                                           0, 1, 4, 10, 14, 15, 24, 25, 26, 34, 35, 36, 37, 44,
                                           45, 46, 47, 48, 54, 55, 56, 57, 58, 59, 64, 70, 71, 72,
                                           73, 74, 75, 76, 77, 78, 79, 81, 88, 92, 93, 94, 95, 96, 97
                                       }
                                       );

        Сrossword questionMark = new Сrossword("Кроссворд №2",
                                               "Вопросительный знак",
                                               @"C:\\questionMark.png",
                                               new List<string>()
                                               {
                                                   " ", " ", " ", " ", "1", "1", " ", " ", " ", " ",
                                                   " ", " ", " ", " ", "2", "2", "1", " ", " ", " ",
                                                   " ", "2", "3", "1", "2", "2", "2", "6", "4", " ",
                                               },
                                               new List<string>()
                                               {
                                                   " ", " ", "6",
                                                   " ", "2", "2",
                                                   " ", "2", "2",
                                                   " ", " ", "2",
                                                   " ", " ", "3",
                                                   " ", " ", "4",
                                                   " ", " ", "2",
                                                   " ", " ", " ",
                                                   " ", " ", "2",
                                                   " ", " ", "2",
                                               },
                                               new List<int>()
                                               { 
                                                   2, 3, 4, 5, 6, 7, 11, 12, 17, 18, 21, 22, 27, 28, 37, 38, 
                                                   46, 47, 48, 54, 55, 56, 57, 64, 65, 84, 85, 94, 95
                                               }
                                               );

        Сrossword butterfly = new Сrossword("Кроссворд №3",
                                            "Бабочка",
                                            @"C:\\butterfly.jpg",
                                            new List<string>()
                                                {
                                                " ", "2", "3", "1", "2", "5", "2", "2", "1", " ",
                                                " ", "1", "1", "1", "3", "1", "1", "1", "2", " ",
                                                "4", "1", "2", "5", "1", "1", "2", "2", "1", "3",
                                            },
                                            new List<string>()
                                            {
                                                " ", " ", "3",
                                                "1", "2", "1",
                                                "2", "1", "2",
                                                "2", "1", "2",
                                                "1", "1", "5",
                                                "1", "3", "2",
                                                "5", "1", "1",
                                                "2", "1", "3",
                                                "1", "1", "2",
                                                " ", " ", "4",
                                            },
                                            new List<int>()
                                            {
                                                2, 3, 4, 12, 14, 15, 17, 21, 22, 25, 27, 28, 30, 31,
                                                33, 35, 36, 40, 42, 44, 45, 46, 47, 48, 50, 53, 54,
                                                55, 58, 59, 60, 61, 62, 63, 64, 66, 69, 72, 73, 75,
                                                77, 78, 79, 81, 83, 86, 87, 93, 94, 95, 96
                                            }
                                            );

        Сrossword house = new Сrossword("Кроссворд №4",
                                        "Домик",
                                        @"C:\\house.png",
                                        new List<string>()
                                        {
                                            " ", " ", " ", "2", " ", " ", " ", " ", " ", " ",
                                            " ", " ", "4", "2", "2", "2", " ", " ", " ", " ",
                                            "1", "7", "2", "2", "6", "2", "4", "7", "1", " ",
                                        },
                                        new List<string>()
                                        {
                                            " ", " ", "1",
                                            " ", " ", "3",
                                            " ", "2", "2",
                                            " ", "2", "2",
                                            " ", " ", "9",
                                            " ", " ", "7",
                                            "1", "1", "1",
                                            "1", "1", "1",
                                            " ", "4", "1",
                                            " ", "4", "1",
                                        },
                                        new List<int>()
                                        {
                                            4, 13, 14, 15, 22, 23, 25, 26, 31, 32, 36, 37, 40,
                                            41, 42, 43, 44, 45, 46, 47, 48, 51, 52, 53, 54, 55,
                                            56, 57, 61, 64, 67, 71, 74, 77, 81, 82, 83, 84, 87,
                                            91, 92, 93, 94, 97
                                        }
                                        );

        Сrossword rabbit = new Сrossword("Кроссворд №5",
                                         "Заяц",
                                         @"C:\\rabbit.jpg",
                                         new List<string>()
                                         {
                                             " ", " ", " ",  " ", " ", " ",  " ", " ", " ", " ",
                                             " ", " ", "7",  " ", "4", "4",  " ", "7", " ", " ",
                                             "3", "5", "2", "10", "1", "1", "10", "2", "5", "3",
                                         },
                                         new List<string>()
                                         {
                                             " ", "2", "2",
                                             " ", "2", "2",
                                             " ", "2", "2",
                                             " ", "2", "2",
                                             " ", " ", "8",
                                             " ", " ", "10",
                                             " ", " ", "10",
                                             "2", "4", "2",
                                             " ", "3", "3",
                                             " ", " ", "6",
                                         },
                                         new List<int>()
                                         { 
                                             2, 3, 6, 7, 12, 13, 16, 17, 22, 23, 26, 27, 32, 33, 36, 37, 41, 42, 43,
                                             44, 45, 46, 47, 48, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
                                             64, 65, 66, 67, 68, 69, 70, 71, 73, 74, 75, 76, 78, 79, 81, 82, 83, 86, 87,
                                             88, 92, 93, 94, 95, 96, 97 
                                         }
                                         );

        readonly Сrossword tv = new Сrossword("Кроссворд №6",
                                     "Телевизор",
                                     @"C:\\tv.png",
                                     new List<string>()
                                     {
                                         " ", "1", " ", " ", " ", " ", " ", "1", " ", " ",
                                         " ", "1", "1", "3", "1", "1", "2", "1", "2", " ",
                                         "7", "4", "7", "2", "1", "1", "1", "1", "3", "7",
                                     },
                                     new List<string>()
                                     {
                                         " ", "1", "1",
                                         " ", "1", "1",
                                         " ", " ", "10",
                                         "1", "2", "2",
                                         " ", "3", "1",
                                         "1", "1", "1",
                                         " ", "3", "1",
                                         " ", "4", "2",
                                         " ", " ", "10",
                                         " ", "1", "1",
                                     },
                                     new List<int>()
                                     {
                                         2, 7, 13, 16, 20, 21, 22, 23, 24, 25, 26, 27, 28,
                                         29, 30, 32, 33, 38, 39, 40, 41, 42, 49, 50, 52,
                                         59, 60, 61, 62, 69, 70, 71, 72, 73, 78, 79, 80,
                                         81, 82, 83, 84, 85, 86, 87, 88, 89, 91, 98
                                     }
                                     );

        //Объект temp класса Сrossword присваивает себе все значения кроссворда в методе, срабатывающим при событии menuItem_Click
        Сrossword temp = new Сrossword(null, null, null, null, null, null);
        static bool gameIsRunning;  //С помощью этого флага очистка поля производится только тогда, когда панели не заполнены цифрами
                                    //Также, если имеет значение false, метод, который срабатывает при событии label_Click ничего не будет делать
        static int counter; // счетчик для подсчета закрашенных клеток (используется для проверки на победу)

        public Form1()
        {
            InitializeComponent();
            gameIsRunning = false;
        }

        //Метод, который вызывается, при нажатии на любой из кроссвордов в меню "Выберите кроссворд" на панели управления
        void menuItem_Click(object sender, EventArgs e)
        {
            ToolStripMenuItem clickedTSMI = sender as ToolStripMenuItem;   //clickedLabel преобразуем из объекта в элемент управления Label
            if (clickedTSMI != null)
            {
                if (gameIsRunning == true) 
                {
                    DialogResult result = MessageBox.Show("Хотите начать заново?", "Сообщение", MessageBoxButtons.YesNo);
                    if (result == DialogResult.Yes) { Clear(); }
                    else return;
                }

                switch (clickedTSMI.Text)
                {
                    case "Кроссворд №1": { temp = ship; AssignNumbersToSquares(temp.numbersShipTop, temp.numbersShipLeft); break; }
                    case "Кроссворд №2": { temp = questionMark; AssignNumbersToSquares(temp.numbersShipTop, temp.numbersShipLeft); break; }
                    case "Кроссворд №3": { temp = butterfly; AssignNumbersToSquares(temp.numbersShipTop, temp.numbersShipLeft); break; }
                    case "Кроссворд №4": { temp = house; AssignNumbersToSquares(temp.numbersShipTop, temp.numbersShipLeft); break; }
                    case "Кроссворд №5": { temp = rabbit; AssignNumbersToSquares(temp.numbersShipTop, temp.numbersShipLeft); break; }
                    case "Кроссворд №6": { temp = tv; AssignNumbersToSquares(temp.numbersShipTop, temp.numbersShipLeft); break; }
                }
            }    
        }
        //Метод, который вызывается, при нажатии на "Правила" на панели управления
        private void rules_Click(object sender, EventArgs e)
        {
            MessageBox.Show("1. Японский кроссворд представляет собой зашифрованный рисунок, в котором цифры слева от рядов и сверху над " +
                "колонками показывают, сколько групп черных клеток находится в соответствующей линии и сколько черных клеток содержит " +
                "каждая группа. Например, три числа - 2, 5, 9 - обозначают, что в этом ряду есть три группы, состоящие: первая - из двух, " +
                "вторая - из пяти, третья - из девяти слитных черных клеток.\n \n" +
                "2. Группы разделены, по крайней мере, одной пустой клеткой.\n\n" +
                "3. Группы не всегда начинаются от края поля, т.е.пустые клетки могут быть и по краям рядов.\n\n" +
                "4. Так что определите, сколько пустых клеток находится между группами черных клеток(маленький совет: в процессе " +
                "решения отмечайте не только “найденные” вами черные клетки, но и места расположения пустых клеток - это облегчит " +
                "выполнение рисунка), и если все сделаете правильно, то получится картинка.", "Правила");
        }

        //Метод AssignIconsToSquares() перебирает все элементы управления Label в TableLayoutPanel2 (верхняя панель) и каждому из элементов
        //в свойство Text присваивается цифра в соответствии с цифрой из numbersTop.
        //в строке Control control in tableLayoutPanel2.Controls создается переменная с именем control, которая в шаге цикла хранит каждый элемент
        //управления по одному, пока у этого элемента управления есть инструкции в цикле, выполняемом для него.
        private void AssignNumbersToSquares(List<string> numbersTop, List<string> numbersLeft)
        {
            int i = 29;
            foreach (Control control in tableLayoutPanel2.Controls)
            {
                Label numberLabel = control as Label;   //преобразует переменную control в метку с именем numberLabel
                if (numberLabel != null &&
                    i >= 0) 
                {
                    numberLabel.Text = numbersTop[i];
                    --i;
                }
            }
            //для TableLayoutPanel3 производятся аналогичные действия
            foreach (Control control in tableLayoutPanel3.Controls)
            {
                Label numberLabel = control as Label;  
                if (numberLabel != null &&           
                    i <= 28)
                {
                    numberLabel.Text = numbersLeft[28 - i];
                    ++i;
                }
            }
            counter = 0;
            gameIsRunning = true;
        }

        //Событие при нажатии на элемент управления из tableLayoutPanel4 (панель, на которой решается кроссворд)
        //Каждый раз, когда свойству логического элемента BackColor присваивается значение Black счетчик counter увеличевается на 1,
        //и соответственно если Black меняется на White counter уменьшается на 1.
        //При соответствии temp.controlsTabIndexes.Count количеству черных клеток проводится проверка на победу
        private void label_Click(object sender, MouseEventArgs e)
        {
            if (gameIsRunning == false) { return; }
            Label clickedLabel = sender as Label;    //clickedLabel преобразуем из объекта в элемент управления Label               
            if (clickedLabel != null)
            {   //при нажатии на левую кнопку мыши
                if (e.Button == MouseButtons.Left)                  
                {   //в шрифте Webdings символы заменены картинками, букве r соответствует крестик
                    if (clickedLabel.Text == "r") { clickedLabel.Text = ""; }                    
                    if (clickedLabel.BackColor == Color.White) { clickedLabel.BackColor = Color.Black; ++counter; }
                    else if (clickedLabel.BackColor == Color.Black) { clickedLabel.BackColor = Color.White; --counter; }
                }
                //при нажатии на правую кнопку мыши
                else if (e.Button == MouseButtons.Right)                    
                {
                    if (clickedLabel.Text == "r") { clickedLabel.Text = ""; }
                    else if (clickedLabel.Text == "")
                    {
                        if (clickedLabel.BackColor == Color.Black) { clickedLabel.BackColor = Color.White; --counter; }
                        clickedLabel.Text = "r";
                    }
                }

                else return;
            }
            if (counter == temp.controlsTabIndexes.Count) { CheckForWin(); }
        }
        //принцип работы метода проверки на победу заключается в том, чтобы в список compare занести индексы черных клеток кроссворда
        //и потом сранить со списком controlsTabIndexes у объекта класса Crossword. При равенстве списков выводится сообщение о победе.
        private void CheckForWin()
        {
            int i = counter - 1;
            List<int> compare = new List<int>() {};
            //занесение индексов черных клеток в список compare
            foreach (Control control in tableLayoutPanel4.Controls)
            {   
                Label numberLabel = control as Label;
                if (numberLabel != null &&          
                    i >= 0 &&
                    numberLabel.BackColor == Color.Black)
                {
                    compare.Add(numberLabel.TabIndex); 
                    --i;
                }
            }
            //сравнение списков 
            var firstNotSecond = compare.Except(temp.controlsTabIndexes).ToList();
            var secondNotFirst = temp.controlsTabIndexes.Except(compare).ToList();
            //проверка на равенство списков
            if (!firstNotSecond.Any() && !secondNotFirst.Any()) 
            {
                string Message = "Вы решили кроссворд и расшифровали картинку \"" + temp.name + "\"!!!";
                MessageBox.Show(Message, "Сообщение", MessageBoxButtons.OK);
                SetImage();
                Clear();
            }
        }
        //Метод, добавляющий иконку решенному кроссворду в меню на панели управления и изменяет текст Кроссворд №n на описание расшифрованной
        //картинки(например, "Кроссворд №1" изменит на "Кораблик" и добавит иконку кораблика). SetImage срабатывает только при победе.
        //В дальнейшем при нажатии по решенному кроссворду в меню на панели управления, кроссворд открываться не будет, т.к. в событии
        //menuItem_Click оператор switch имеет варианты действий только для нерешенных кроссворды. (зачем решать кроссворд еще раз?)
        private void SetImage()
        {
            foreach (ToolStripDropDownItem dropDownItem in toolStripMenuItem1.DropDownItems)
            {
                ToolStripDropDownItem item = dropDownItem as ToolStripMenuItem;
                if (item != null && item.Text == temp.indexName) 
                { 
                    item.Image = Image.FromFile(temp.imageLocation);
                    item.Text = temp.name;
                }
            }
        }
        //Метод проверяет все 3 панели на наличие на них логических элементов, у которых свойства Text и BackColor не соответствуют начальным
        private void Clear()
        {
            gameIsRunning = false;
            foreach (Control control in tableLayoutPanel2.Controls)
            {
                Label numberLabel = control as Label;
                if (numberLabel != null &&
                    numberLabel.Text != "")
                {
                    numberLabel.Text = "";
                }
            }

            foreach (Control control in tableLayoutPanel3.Controls)
            {
                Label numberLabel = control as Label;
                if (numberLabel != null &&
                    numberLabel.Text != "")
                {
                    numberLabel.Text = "";
                }
            }

            foreach (Control control in tableLayoutPanel4.Controls)
            {
                Label numberLabel = control as Label;
                if (numberLabel != null &&
                    (numberLabel.BackColor == Color.Black || numberLabel.Text == "r"))
                {
                    numberLabel.BackColor = Color.White;
                    numberLabel.Text = "";
                }
            }
        }
    }
}
