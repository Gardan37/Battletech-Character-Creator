#ifndef CHARDATA_H
#define CHARDATA_H

#include <QWidget>
#include <QMap>
#include "text_resurce.h"

class CharData : public QWidget
{
Q_OBJECT
private:


public:
    explicit CharData(QWidget *parent = 0);
    int xp; // ������������ ���������� XP
    int age; // ���� �����
    QString charName; // ������������� �����
    QPair <QString, int> AffName; // ������������� ����� ��������
    QPair <QString, int> subAffName; // ������������� ��� ����� ��������
    QPair <QString, int> clanCastName; // ������������� ����� �����
    QPair <QString, int> earlyChildName; // ������������� �������� ������ �������
    QPair <QString, int> lateChildName; // ������������� �������� ������� �������
    QPair <QString, int> schoolName; // ������������� �������� �����
    QPair <QString, int> basicSchool; // ������������� �������� ������� ����������
    QPair <QString, int> advSchool; // ������������� �������� ��� ����������
    QPair <QString, int> specSchool; // ������������� �������� ���� ����������
    QString realLife;
    QString phenotype;
    bool milField;
    bool policField;
    bool civField;

    QString sex;
    QString hair;
    QString eye;
    int height;
    int weight;
    int startXP;


    QMap<QString, int> charAttr; // ������������� ���������
    QList<QPair<QString, int> > charSkills; // ������������� ������
    QList<QPair<QString, int> > charTraits;

    QMap<QString, int> preCharAttr; // ������������ ���������
    QList<QPair<QString, int> > preCharSkills; // ������������ ������
    QList<QPair<QString, int> > preCharTraits; // ������������ ��������

    bool comChk;
    bool wobChk;


    void Atribute();
    void changeSkills(QString, int);
    int findSkill(QString);
    void changeTraits(QString, int);
    int findTraits(QString);


    void clearZeroSkills();
    void clearZeroTraits();
    void clearChar();

signals:

public slots:

};

#endif // CHARDATA_H
