//
#ifndef TFNLayoutMetricsSizing_Protocol_h
#define TFNLayoutMetricsSizing_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNLayoutMetricsSizing <NSObject>

@required

/* required instance methods */
- (struct CGSize { double x0; double x1; })sizeWithLayoutMetrics:(id)metrics;

@optional

@end

#endif /* TFNLayoutMetricsSizing_Protocol_h */
