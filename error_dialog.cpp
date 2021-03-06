/* LiquiNet is cross platform GUI software to solve water or Liquid Pipe Network Problems
    Copyright (C) 2016  Samadrita Karmakar (samadritakarmakar@gmail.com)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.*/



#include "error_dialog.h"
#include "ui_error_dialog.h"

error_dialog::error_dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::error_dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Error!");
}

error_dialog::~error_dialog()
{
    delete ui;
}

void error_dialog::callerror(QString a)
{
    ui->erro_lbl->setText(a);
    this->show();
}

void error_dialog::on_ok_erroe_dlg_clicked()
{
    this->close();
}
