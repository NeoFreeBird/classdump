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
