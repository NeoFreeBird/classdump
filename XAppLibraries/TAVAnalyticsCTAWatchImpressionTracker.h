//
#ifndef TAVAnalyticsCTAWatchImpressionTracker_h
#define TAVAnalyticsCTAWatchImpressionTracker_h
@import Foundation;

#include "TAVAnalyticsCTAEventNotifiable-Protocol.h"
#include "TAVAnalyticsCTATracker.h"

@interface TAVAnalyticsCTAWatchImpressionTracker : TAVAnalyticsCTATracker <TAVAnalyticsCTAEventNotifiable>

/* instance methods */
- (id)init;
- (void)handleCTAEventNotification:(id)notification;

@end

#endif /* TAVAnalyticsCTAWatchImpressionTracker_h */
