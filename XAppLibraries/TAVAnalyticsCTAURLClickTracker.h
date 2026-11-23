//
#ifndef TAVAnalyticsCTAURLClickTracker_h
#define TAVAnalyticsCTAURLClickTracker_h
@import Foundation;

#include "TAVAnalyticsCTAEventNotifiable-Protocol.h"
#include "TAVAnalyticsCTATracker.h"

@interface TAVAnalyticsCTAURLClickTracker : TAVAnalyticsCTATracker <TAVAnalyticsCTAEventNotifiable>

/* instance methods */
- (id)init;
- (void)handleCTAEventNotification:(id)notification;

@end

#endif /* TAVAnalyticsCTAURLClickTracker_h */
