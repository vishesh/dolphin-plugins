/***************************************************************************
 *   Copyright (C) 2011 by Vishesh Yadav <vishesh3y@gmail.com>             *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA            *
 ***************************************************************************/

#ifndef RENAMEDIALOG_H
#define RENAMEDIALOG_H

#include <kdialog.h>
#include <klineedit.h>
#include <QString>

class RenameDialog : public KDialog
{
    Q_OBJECT

public:
    RenameDialog(QString source, QWidget* parent = 0);
    QString source() const;
    QString destination() const;

private slots:
    void enableDisableOkButton(const QString &text);

private:
    QString m_source;
    KLineEdit *m_destinationFile;
};

#endif // RENAMEDIALOG_H
