#ifndef DOWNLOADTOOLMENUWIDGET_H
#define DOWNLOADTOOLMENUWIDGET_H

/* =================================================
 * This file is part of the TTK Downloader project
 * Copyright (C) 2015 - 2020 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include <QMenu>
#include <QToolButton>
#include "downloadglobaldefine.h"

/*! @brief The class of the tool menu.
 * @author Greedysky <greedysky@163.com>
 */
class DOWNLOAD_WIDGET_EXPORT DownloadToolMenu : public QMenu
{
    Q_OBJECT
public:
    /*!
     * Object contsructor.
     */
    explicit DownloadToolMenu(QWidget *parent = 0);

    /*!
     * Get class object name.
     */
    static QString getClassName();

Q_SIGNALS:
    /*!
     * Window state changed.
     */
    void windowStateChanged(bool state);

protected:
    /*!
     * Override the widget event.
     */
    virtual void showEvent(QShowEvent *event) override;
    virtual void hideEvent(QHideEvent *event) override;

};


/*! @brief The class of the tool menu base widget.
 * @author Greedysky <greedysky@163.com>
 */
class DOWNLOAD_WIDGET_EXPORT DownloadToolMenuWidget : public QToolButton
{
    Q_OBJECT
public:
    /*!
     * Object contsructor.
     */
    explicit DownloadToolMenuWidget(QWidget *parent = 0);

    ~DownloadToolMenuWidget();

    /*!
     * Get class object name.
     */
    static QString getClassName();

    /*!
     * Set background translucent.
     */
    void setTranslucentBackground();

public Q_SLOTS:
    /*!
     * To popup menu.
     */
    void popupMenu();

protected:
    DownloadToolMenu *m_menu;
    QWidget *m_containWidget;

};

#endif // DOWNLOADTOOLMENUWIDGET_H
