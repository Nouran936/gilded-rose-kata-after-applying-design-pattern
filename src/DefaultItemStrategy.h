//
// Created by Nouran on 12/18/2024.
//

#ifndef DEFAULTITEMSTRATEGY_H
#define DEFAULTITEMSTRATEGY_H
#include "UpdateStrategy.h"

class DefaultItemStrategy : public UpdateStrategy
{
    public:
    void updateQuality(Item &item) override
    {
        item.sellIn -= 1;
        if (item.quality >= 0) {
            item.quality = item.quality - 1;
            if (item.sellIn <= 0) {
                item.quality = item.quality - 1;
            }
        }
        if (item.quality < 0)
        {
            item.quality = 0;
        }
    }
};

#endif //DEFAULTITEMSTRATEGY_H
