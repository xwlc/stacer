#ifndef RESOURCESPAGE_H
#define RESOURCESPAGE_H

#include <QChart>
#include <QSpacerItem>
#include <QTimer>
#include <QWidget>

#include "Managers/info_manager.h"
#include "history_chart.h"

namespace Ui {
    class ResourcesPage;
}

class ResourcesPage : public QWidget
{
    Q_OBJECT

public:
    explicit ResourcesPage(QWidget *parent = 0);
    ~ResourcesPage();

private slots:
    void updateCpuChart();
    void updateCpuLoadAvg();
    void updateDiskReadWrite();
    void updateMemoryChart();
    void updateNetworkChart();
    void initDiskPieChart();
    void diskPieSeriesCustomize();

private:
    void init();

private:
    Ui::ResourcesPage *ui;

    InfoManager *im;

    HistoryChart *mChartCpu;
    HistoryChart *mChartCpuLoadAvg;
    HistoryChart *mChartDiskReadWrite;
    HistoryChart *mChartMemory;
    HistoryChart *mChartNetwork;

    QChartView *mChartViewDiskPie;
    QChart *mChartDiskPie;

    QWidget *gridWidgetDiskPie;
    QGridLayout *gridLayoutDiskPie;
    QPieSeries *mDiskPieSeries;

    QList<int> chartColors;

    QTimer *mTimer;
};

#endif // RESOURCESPAGE_H
