void MainWindow::on_actionSuperscript_triggered()
{
    Subscript -> setChecked(false);
    QTextCharFormat format;

    if(Superscript -> isChecked())
        format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
    else
        format.setVerticalAlignment(QTextCharFormat::AlignNormal);

    ui -> textEdit -> mergeCurrentCharFormat(format);
}

void MainWindow::on_actionSubscript_triggered()
{
    Superscript -> setChecked(false);
        QTextCharFormat format;

        if(Subscript -> isChecked())
            format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
        else
            format.setVerticalAlignment(QTextCharFormat::AlignNormal);

        ui -> textEdit -> mergeCurrentCharFormat(format);
}
