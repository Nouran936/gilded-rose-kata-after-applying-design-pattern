//
// Created by Nouran on 12/18/2024.
//

#ifndef CONJUREDSTRATEGY_H
#define CONJUREDSTRATEGY_H
#include "UpdateStrategy.h"

class ConjuredStrategy : public UpdateStrategy
{
    public:
    void updateQuality(Item &item) override
    {
        item.sellIn = item.sellIn - 1;
        if (item.sellIn >= 0)
        {
            if (item.quality > 1)
            {
                item.quality = item.quality - 2;
            }
            else
            {
                item.quality = 0;
            }
        }

        else
        {
            if (item.quality > 3)
            {
                item.quality = item.quality - 4;
            }
            else
            {
                item.quality = 0;
            }
        }
    }
};

#endif //CONJUREDSTRATEGY_H
