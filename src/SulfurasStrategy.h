//
// Created by Nouran on 12/18/2024.
//

#ifndef SULFURASSTRATEGY_H
#define SULFURASSTRATEGY_H
#include "UpdateStrategy.h"

class SulfurasStrategy : public UpdateStrategy
{
    public:
    void updateQuality(Item &item) override
    {
        item.quality = 80;
    }
};

#endif //SULFURASSTRATEGY_H
