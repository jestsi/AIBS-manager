#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_downloadButton_2_clicked()
{
    try {
      system("git clone https://github.com/YouVBeenHacked/gideon ");
      QMessageBox::information(this, "Готово!","Успешно загруженно!");
    }  catch (...) {
        throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git\n");
        QMessageBox::information(this, "Готово!","Успешно загруженно!");
    }
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Ссылка","О gideon - \nhttps://telegra.ph/Gideon-poisk-i-sbor-informacii-11-18-4");
}

//gideon сверху

void MainWindow::on_downloadButton_clicked()
{
     QMessageBox::information(this, "Информация","1. Скачаные софты сохраняются в директории где была запущенна программа.\n"
                                                 "2. Для работы программы должен быть установлен git.\n"
                                                 "3. Пока что тут всего 3 софта но скоро будет больше.\n"
                                                 "4. Что бы получить ифнормацию о софте нажмите на название софта.\n"
                                                 "5. Источники разные но в основном группа в телеге @TESTLAND и @HZF NEWS\n"
                                                 "Так же огромное спасибо каналу в телеграмм HZF всем советую вот ссылка https://t.me/joinchat/AAAAAEtHfRzMq5hHDSRVvQ"
                                                 "\n Автор : Гуц Максим Vk - https://vk.com/nesryf");
}

void MainWindow::on_pushButton_2_clicked()
{
     QMessageBox::information(this, "Ссылка","О Impulse - \nhttps://telegra.ph/Impulse-luchshij-bomber-na-Termux-and-Linux-11-19");

}

void MainWindow::on_downloadButton_3_clicked()
{
    try {
      system("git clone https://github.com/LimerBoy/Impulse");
      QMessageBox::information(this, "Готово!","Успешно загруженно!");
    }  catch (...) {
        throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
    }
}

// impulse !

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "Ссылка","О Wig - \nhttps://telegra.ph/wig-poluchaem-mnogo-interesnoj-informacii-o-sajte-10-12");

}

void MainWindow::on_downloadButton_4_clicked()
{
    try {
      system("git clone https://github.com/jekyc/wig");
      QMessageBox::information(this, "Готово!","Успешно загруженно!");
    }  catch (...) {
        throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
    }
}
// wig
void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this, "Ссылка","О Vk_Photos - \nhttps://telegra.ph/Vk-photos-skachivaem-vse-foto-vk-razom-11-20-4");

}

void MainWindow::on_downloadButton_5_clicked()
{
    try {
      system("git clone https://github.com/LuigiVampa92/vk_photos");
      QMessageBox::information(this, "Готово!","Успешно загруженно!");
    }  catch (...) {
        throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
    }
}
// Vk_photo

void MainWindow::on_pushButton_6_clicked()
{
     QMessageBox::information(this, "Ссылка","О A-Rat - \nhttps://telegra.ph/A-Rat-sborshchik-RAT-v-Termux-11-16-3");
}
void MainWindow::on_downloadButton_7_clicked()
{
    try {
      system("git clone https://github.com/RexTheGod/A-Rat");
      QMessageBox::information(this, "Готово!","Успешно загруженно!");
    }  catch (...) {
        throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
    }
}
// A-RAT

void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::information(this, "Ссылка","О Lazy SQL Map - \nhttps://telegra.ph/LazySQLMap-SQLMap-dlya-lentyaev-11-23");
}
void MainWindow::on_downloadButton_6_clicked()
{
    try {
      system("git clone https://github.com/Yukinoshita47/lazysqlmap.git");
      QMessageBox::information(this, "Готово!","Успешно загруженно!");
    }  catch (...) {
        throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
    }
}
// lazy sql map

void MainWindow::on_pushButton_8_clicked()
{
    QMessageBox::information(this, "Ссылка","О NikTok-OSINT - \nhttps://telegra.ph/NikTok-OSINT-sobiraem-informaciyu-po-profilyu-v-tiktoke-11-15-3");
}
void MainWindow::on_downloadButton_9_clicked()
{
    try {
      system("git clone https://github.com/sc1341/TikTok-OSINT");
      QMessageBox::information(this, "Готово!","Успешно загруженно!");
    }  catch (...) {
        throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
    }
}
// NikTok

void MainWindow::on_pushButton_7_clicked()
{
    QMessageBox::information(this, "Ссылка","О trape - \nhttps://telegra.ph/Trape-sledim-za-polzovatelem-cherez-ssylku-11-07");

}
void MainWindow::on_downloadButton_8_clicked()
{
    try {
      system("git clone https://github.com/jofpin/trape.git");
      QMessageBox::information(this, "Готово!","Успешно загруженно!");
    }  catch (...) {
        throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
    }
}
// trape

void MainWindow::on_pushButton_9_clicked()
{
    QMessageBox::information(this, "Ссылка","О DDoS in Termux - \nhttps://telegra.ph/Ustraivaem-DDoS-ataku-na-Wi-Fi-v-Termux-11-25");}
void MainWindow::on_downloadButton_10_clicked()
{
    try {
      system("git clone https://github.com/artem-cell/wifi-dosser");
      QMessageBox::information(this, "Готово!","Успешно загруженно!");
    }  catch (...) {
        throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
    }
}
// wifi dos in

void MainWindow::on_pushButton_10_clicked()
{
     QMessageBox::information(this, "Ссылка","О PDF virus - \nhttps://telegra.ph/Zarazhaem-PDF-fajl-v-Termux-11-21");
}

void MainWindow::on_downloadButton_11_clicked()
{
    try {
      system("git clone https://github.com/deepzec/Bad-Pdf.git");
      QMessageBox::information(this, "Готово!","Успешно загруженно!");
    }  catch (...) {
        throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
    }
}
// pdf virus

void MainWindow::on_pushButton_11_clicked()
{
      QMessageBox::information(this, "Ссылка","О  PhantomScanner - \nhttps://telegra.ph/PhantomScanner-skaniruem-fajly-na-virusy-11-20");
}

void MainWindow::on_downloadButton_12_clicked()
{
    try {
      system("git clone https://github.com/LimerBoy/PhantomScanner");
      QMessageBox::information(this, "Готово!","Успешно загруженно!");
    }  catch (...) {
        throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
    }
}
// PhantomScanner

void MainWindow::on_pushButton_12_clicked()
{
    QMessageBox::information(this, "Ссылка","О GonnaCry  - \nhttps://telegra.ph/WonnaCry-sobiraem-virus-vymogatel-dlya-linuks-11-16");}
void MainWindow::on_downloadButton_13_clicked()
{
    try {
          system("git clone https://github.com/tarcisio-marinho/GonnaCry.git");
          QMessageBox::information(this, "Готово!","Успешно загруженно!");
        }  catch (...) {
            throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
    }
}
// GonnaCry

void MainWindow::on_pushButton_13_clicked()
{
    QMessageBox::information(this, "Ссылка","О Insta Hack - \nhttps://telegra.ph/Vzlom-Instagram-s-pomoshchyu-smartfona-11-15");}
void MainWindow::on_downloadButton_14_clicked()
{
    try {
         system("git clone https://github.com/noob-hackers/ighack");
         QMessageBox::information(this, "Готово!","Успешно загруженно!");
       }  catch (...) {
           throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
       }
}
// Insta Hack

void MainWindow::on_pushButton_14_clicked()
{
    QMessageBox::information(this, "Ссылка","О Shodan  - \nhttps://telegra.ph/Besplatnyj-poisk-shodan-07-02");

}

void MainWindow::on_downloadButton_15_clicked()
{
    try {
          system("git clone https://github.com/lime542/free_shodan.git");
          QMessageBox::information(this, "Готово!","Успешно загруженно!");
        }  catch (...) {
            throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
        }
}
// Shodan

void MainWindow::on_pushButton_15_clicked()
{
    QMessageBox::information(this, "Ссылка","О Tool-X - \nhttps://telegra.ph/Tool-X-ili-sborka-utilit-dlya-pentestinga-06-17");

}

void MainWindow::on_downloadButton_16_clicked()
{
    try {
          system("git clone https://github.com/Rajkumrdusad/Tool-X.git");
          QMessageBox::information(this, "Готово!","Успешно загруженно!");
        }  catch (...) {
            throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
        }
}
// tool-x
void MainWindow::on_pushButton_16_clicked()
{
    QMessageBox::information(this, "Ссылка","О Toolss  - \nhttps://telegra.ph/Sbornaya-solyanka-iz-utilit-06-12");

}

void MainWindow::on_downloadButton_17_clicked()
{
    try {
          system("git clone https://github.com/AnonHackerr/toolss");
          QMessageBox::information(this, "Готово!","Успешно загруженно!");
        }  catch (...) {
            throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
        }
}
// toolss

void MainWindow::on_pushButton_17_clicked()
{
    QMessageBox::information(this, "Ссылка","О Red-Hack - \nhttps://te.legra.ph/Uznaem-uyazvimosti-sajta-i-informaciyu-o-nyom-s-pomoshchyu-termux-05-29");

}

void MainWindow::on_downloadButton_18_clicked()
{
    try {
          system("git clone https://github.com/Tuhinshubhra/RED_HAWK");
          QMessageBox::information(this, "Готово!","Успешно загруженно!");
        }  catch (...) {
            throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
        }
}
// REDHACK

void MainWindow::on_pushButton_18_clicked()
{
    QMessageBox::information(this, "Ссылка","О Userrecorn - \nhttps://telegra.ph/Userrecon-poisk-soc-setej-po-niku-11-12-3");

}

void MainWindow::on_downloadButton_19_clicked()
{
    try {
          system("https://telegra.ph/Userrecon-poisk-soc-setej-po-niku-11-12-3");
          QMessageBox::information(this, "Готово!","Успешно загруженно!");
        }  catch (...) {
            throw QMessageBox::warning(this, "Error!","Ошибка загрузки!\nВозможно у вас не установлен git");
        }
}
// Userrecorn
