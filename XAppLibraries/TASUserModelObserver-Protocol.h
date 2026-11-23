//
#ifndef TASUserModelObserver_Protocol_h
#define TASUserModelObserver_Protocol_h
@import Foundation;

@protocol TASUserModelObserver

@required

/* required instance methods */
- (void)userModelDidUpdate:(id)update;

@optional

@end

#endif /* TASUserModelObserver_Protocol_h */
