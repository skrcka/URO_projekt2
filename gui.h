#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login_widget.h"
#include "stock_widget.h"
#include "bills_widget.h"
#include "orders_widget.h"
#include "User.h"
#include "Item.h"
#include "Bill.h"
#include "Order.h"
#include "Customer.h"
#include <vector>
#include <iostream>
#include <QSizePolicy>
#include <QHeaderView>

QT_BEGIN_NAMESPACE
namespace Ui { class DenRoze3; }
QT_END_NAMESPACE

class DenRoze3 : public QMainWindow
{
    Q_OBJECT

public:
    DenRoze3(QWidget *parent = nullptr);
    ~DenRoze3();
	login_widget *lw;
	stock_widget *sw;
	bills_widget *bw;
	orders_widget *ow;
	std::vector<User> users;
	std::vector<Item> items;
	std::vector<Bill> billvector;
	std::vector<Order> ordervector;
	std::vector<Customer> customers;
	QList<QString>* stock_header;
	QList<QString>* bill_stock_header;
	QList<QString>* bill_item_header;
	QList<QString>* order_stock_header;
	QList<QString>* order_item_header;
	User activeUser;
	int activeBill;
	int activeOrder;
	int activeWindow;

	void refresh_bill();
	void refresh_order();
	void update_widgets();
	void refresh_stock();

private slots:
	void login();
	void stock();
	void bills();
	void orders();
	void addStock();
	void remStock();
	void nextBill();
	void prevBill();
	void addBill();
	void delBill();
	void remBill();
	void nextOrder();
	void prevOrder();
	void addOrder();
	void delOrder();
	void remOrder();

private:
    Ui::DenRoze3 *ui;
};
#endif // MAINWINDOW_H
