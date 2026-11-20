//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLayoutMetricsEnvironment_Protocol_h
#define TFNLayoutMetricsEnvironment_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNLayoutMetricsEnvironment <NSObject>

@required

/* required instance methods */
- (id)calculatedLayoutMetrics;
- (void)layoutMetricsDidChange:(id)change to:(id)to;

@optional

@end

#endif /* TFNLayoutMetricsEnvironment_Protocol_h */
