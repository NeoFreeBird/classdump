//
#ifndef TAVAnalyticsCTAAppOpenImpressionTracker_h
#define TAVAnalyticsCTAAppOpenImpressionTracker_h
@import Foundation;

#include "TAVAnalyticsCTAEventNotifiable-Protocol.h"
#include "TAVAnalyticsCTATracker.h"

@interface TAVAnalyticsCTAAppOpenImpressionTracker : TAVAnalyticsCTATracker <TAVAnalyticsCTAEventNotifiable>

/* instance methods */
- (id)init;
- (void)handleCTAEventNotification:(id)notification;

@end

#endif /* TAVAnalyticsCTAAppOpenImpressionTracker_h */
