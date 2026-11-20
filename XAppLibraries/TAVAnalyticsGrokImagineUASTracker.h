//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsGrokImagineUASTracker_h
#define TAVAnalyticsGrokImagineUASTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSDate, NSObject, NSString;

@interface TAVAnalyticsGrokImagineUASTracker : NSObject <TAVAnalyticsTracker> {
    /* instance variables */
    NSDate *_impressionStartedAt;
}

@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)processState:(id)state;

@end

#endif /* TAVAnalyticsGrokImagineUASTracker_h */
