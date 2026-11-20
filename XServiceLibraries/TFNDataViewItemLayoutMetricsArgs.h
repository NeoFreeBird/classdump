//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDataViewItemLayoutMetricsArgs_h
#define TFNDataViewItemLayoutMetricsArgs_h
@import Foundation;

#include "TFNDataViewItemArgs.h"
#include "TFNLayoutMetrics.h"

@interface TFNDataViewItemLayoutMetricsArgs : TFNDataViewItemArgs

@property (retain, nonatomic) TFNLayoutMetrics *layoutMetrics;

/* instance methods */

@end

#endif /* TFNDataViewItemLayoutMetricsArgs_h */
