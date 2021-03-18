class AddressBook : public QWidget
{
    Q_OBJECT

public:
    AddressBook(QWidget *parent = nullptr);

private:
    QLineEdit *nameLine;
    QTextEdit *addressText;
};
