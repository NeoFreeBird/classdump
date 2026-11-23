//
#ifndef T1TwitterAPITweetEngagementsLimitedListener_h
#define T1TwitterAPITweetEngagementsLimitedListener_h
@import Foundation;

#include "T1TwitterAPIErrorResponseMonitorListener-Protocol.h"

@class NSObject, NSString;

@interface T1TwitterAPITweetEngagementsLimitedListener : NSObject <T1TwitterAPIErrorResponseMonitorListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)twitterAPIErrorResponseMonitor:(id)monitor didEncounterAPIErrorCode:(long long)code response:(id)response;

@end

#endif /* T1TwitterAPITweetEngagementsLimitedListener_h */
