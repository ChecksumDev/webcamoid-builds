/* Webcamoid, webcam capture application.
 * Copyright (C) 2016  Gonzalo Exequiel Pedone
 *
 * Webcamoid is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Webcamoid is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Webcamoid. If not, see <http://www.gnu.org/licenses/>.
 *
 * Web-Site: http://webcamoid.github.io/
 */

#ifndef AKPLUGIN_H
#define AKPLUGIN_H

#include <QtPlugin>

#include "akplugininterface.h"

#define IAK_PLUGIN "Ak.Plugin"

class AKCOMMONS_EXPORT IAkPlugin: public IAkElementProvider
{
    public:
        virtual int registerElements(const QStringList &args={}) = 0;
};

Q_DECLARE_INTERFACE(IAkPlugin, IAK_PLUGIN)

#endif // AKPLUGIN_H
