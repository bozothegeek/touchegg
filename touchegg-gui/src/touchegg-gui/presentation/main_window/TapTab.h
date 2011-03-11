/**
 * @file /src/touchegg-gui/presentation/main_window/TapTab.h
 *
 * @~spanish
 * Este archivo es parte del proyecto Touchégg-GUI, usted puede redistribuirlo
 * y/o modificarlo bajo los téminos de la licencia GNU GPL v3.
 *
 * @~english
 * This file is part of the Touchégg-GUI project, you can redistribute it and/or
 * modify it under the terms of the GNU GPL v3.
 *
 * @class  TapTab
 * @author José Expósito
 */
#ifndef TAPTAB_H
#define TAPTAB_H

#include "src/touchegg-gui/util/Include.h"
#include "src/touchegg-gui/presentation/widgets/GestureConfigWidget.h"
#include "src/touchegg-gui/logic/type/ActionTypeEnum.h"

/**
 * @~spanish
 * Pestaña para configurar los gestos de tipo "Tap".
 *
 * @~english
 * Tab to configure "Tap" gestures.
 */
class TapTab : public QScrollArea {

    public:

        /**
         * @~spanish
         * Constructor.
         *
         * @~english
         * Constructor.
         */
        TapTab();
};

#endif // TAPTAB_H