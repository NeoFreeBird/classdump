//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLayoutMetricsSizing_Protocol_h
#define TFNLayoutMetricsSizing_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNLayoutMetricsSizing <NSObject>

@required

/* required instance methods */
- (struct CGSize { double x0; double x1; })sizeWithLayoutMetrics:(id)metrics;
- (struct CGSize { double x0; double x1; })sizeWithLayoutMetrics:(id)metrics;

@optional

@end

#endif /* TFNLayoutMetricsSizing_Protocol_h */
