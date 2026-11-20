//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
