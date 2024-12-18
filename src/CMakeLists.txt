set(SRC_LIB_NAME src)
add_library(${SRC_LIB_NAME}
        UpdateStrategy.h
        AgedBrieStrategy.h
        BackstageStrategy.h
        SulfurasStrategy.h
        ConjuredStrategy.h
        DefaultItemStrategy.h
        StrategyFactory.h)
target_sources(${SRC_LIB_NAME} PRIVATE GildedRose.cc)
target_include_directories(${SRC_LIB_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})