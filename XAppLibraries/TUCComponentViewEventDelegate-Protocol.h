//
#ifndef TUCComponentViewEventDelegate_Protocol_h
#define TUCComponentViewEventDelegate_Protocol_h
@import Foundation;

@protocol TUCComponentViewEventDelegate

@required

/* required instance methods */
- (id)componentView:(id)view didFireViewEvent:(id)event;
- (id)containerView:(id)view didFireViewEvent:(id)event;

@optional

@end

#endif /* TUCComponentViewEventDelegate_Protocol_h */
