#ifndef SPEC_H
#define SPEC_H

class Spec
{
	QString specs;
	QVector<QString> spec;
	friend class AText;
	friend class Sentence;
public:
	Spec()
	{
		specs = QString::fromLocal8Bit("E: E; E... � ��� �� �� � �� �� � �� ����� ��� �����");
		specs += QString::fromLocal8Bit(" � � �� ��� �� ��� ��� ��� � ��� ��� ������ � ��� �� ������ ����� ����� �� �");
		specs += QString::fromLocal8Bit(" ���� ���� ����� ����� ���� �� ������ �� � ���� ���� ����� ���� ����� ������");
		specs += QString::fromLocal8Bit(" �� �� ������ ���� ����");

		QStringList l = specs.split(" ");
		spec = l.toVector();
	}
};

#endif // SPEC_H