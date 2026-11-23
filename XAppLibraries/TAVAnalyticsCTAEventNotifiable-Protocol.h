//
#ifndef TAVAnalyticsCTAEventNotifiable_Protocol_h
#define TAVAnalyticsCTAEventNotifiable_Protocol_h
@import Foundation;

@protocol TAVAnalyticsCTAEventNotifiable

@required

/* required instance methods */
- (void)handleCTAEventNotification:(id)notification;

@optional

@end

#endif /* TAVAnalyticsCTAEventNotifiable_Protocol_h */
