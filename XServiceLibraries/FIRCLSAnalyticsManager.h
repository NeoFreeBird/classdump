//
#ifndef FIRCLSAnalyticsManager_h
#define FIRCLSAnalyticsManager_h
@import Foundation;

#include "FIRAnalyticsInterop-Protocol.h"
#include "FIRAnalyticsInteropListener-Protocol.h"

@class NSObject, NSString;

@interface FIRCLSAnalyticsManager : NSObject <FIRAnalyticsInteropListener>

@property (retain, nonatomic) id <FIRAnalyticsInterop> analytics;
@property (nonatomic) _Bool registeredAnalyticsEventListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)logCrashWithTimeStamp:(double)stamp toAnalytics:(id)analytics;

/* instance methods */
- (id)initWithAnalytics:(id)analytics;
- (void)registerAnalyticsListener;
- (void)messageTriggered:(id)triggered parameters:(id)parameters;

@end

#endif /* FIRCLSAnalyticsManager_h */
