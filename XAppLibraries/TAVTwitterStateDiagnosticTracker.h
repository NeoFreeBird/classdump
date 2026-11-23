//
#ifndef TAVTwitterStateDiagnosticTracker_h
#define TAVTwitterStateDiagnosticTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsTracker-Protocol.h"
#include "TAVWallTime.h"

@class NSObject, NSString;

@interface TAVTwitterStateDiagnosticTracker : NSObject <TAVAnalyticsTracker>

@property (nonatomic) double gracePeriodInterval;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) id /* block */ testBlock;
@property (retain, nonatomic) TAVWallTime *timestamp;
@property (nonatomic) _Bool logged;
@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)presentationStateDiagnosticTrackerWithGracePeriodInterval:(double)interval;
+ (id)muteStateDiagnosticTrackerWithGracePeriodInterval:(double)interval;

/* instance methods */
- (id)initWithGracePeriodInterval:(double)interval errorCode:(long long)code testBlock:(id /* block */)block;
- (void)processState:(id)state;
- (void)_tfn_emitErrorEventWithState:(id)state errorCode:(long long)code;

@end

#endif /* TAVTwitterStateDiagnosticTracker_h */
