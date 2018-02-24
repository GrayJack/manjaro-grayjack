// Copyright(c) 2017-2018 Alejandro Sirgo Rica & Contributors
//
// This file is part of Flameshot.
//
//     Flameshot is free software: you can redistribute it and/or modify
//     it under the terms of the GNU General Public License as published by
//     the Free Software Foundation, either version 3 of the License, or
//     (at your option) any later version.
//
//     Flameshot is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//     GNU General Public License for more details.
//
//     You should have received a copy of the GNU General Public License
//     along with Flameshot.  If not, see <http://www.gnu.org/licenses/>.

#include "imguruploadertool.h"
#include <QPainter>

ImgurUploaderTool::ImgurUploaderTool(QObject *parent) : CaptureTool(parent) {

}

int ImgurUploaderTool::id() const {
    return 0;
}

bool ImgurUploaderTool::isSelectable() const {
    return false;
}

QString ImgurUploaderTool::iconName() const {
    return "cloud-upload.png";
}

QString ImgurUploaderTool::name() const {
    return tr("Image Uploader");
}

QString ImgurUploaderTool::description() const {
    return tr("Uploads the selection to Imgur");
}

CaptureTool::ToolWorkType ImgurUploaderTool::toolType() const {
    return TYPE_WORKER;
}

void ImgurUploaderTool::processImage(
        QPainter &painter,
        const QVector<QPoint> &points,
        const QColor &color,
        const int thickness)
{
    Q_UNUSED(painter);
    Q_UNUSED(points);
    Q_UNUSED(color);
    Q_UNUSED(thickness);
}

void ImgurUploaderTool::onPressed() {
    Q_EMIT requestAction(REQ_UPLOAD_TO_IMGUR);
}
