//
#ifndef TAVAnalyticsCTAAppInstallImpressionTracker_h
#define TAVAnalyticsCTAAppInstallImpressionTracker_h
@import Foundation;

#include "TAVAnalyticsCTAEventNotifiable-Protocol.h"
#include "TAVAnalyticsCTATracker.h"

@interface TAVAnalyticsCTAAppInstallImpressionTracker : TAVAnalyticsCTATracker <TAVAnalyticsCTAEventNotifiable>

/* instance methods */
- (id)init;
- (void)handleCTAEventNotification:(id)notification;

@end

#endif /* TAVAnalyticsCTAAppInstallImpressionTracker_h */
