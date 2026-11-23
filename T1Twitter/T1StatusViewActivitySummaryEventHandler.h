//
#ifndef T1StatusViewActivitySummaryEventHandler_h
#define T1StatusViewActivitySummaryEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewActivitySummaryEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;
- (void)moveToRetweetsWithAccount:(id)account statusID:(long long)id controller:(id)controller;
- (void)moveToQuoteTweetsWithAccount:(id)account statusID:(long long)id controller:(id)controller;

@end

#endif /* T1StatusViewActivitySummaryEventHandler_h */
