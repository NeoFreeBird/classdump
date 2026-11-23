//
#ifndef T1StatusViewMarkPostNotInterestedEventHandler_h
#define T1StatusViewMarkPostNotInterestedEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewMarkPostNotInterestedEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;
- (id)findNotInterestedActionForStatus:(id)status controller:(id)controller account:(id)account;

@end

#endif /* T1StatusViewMarkPostNotInterestedEventHandler_h */
