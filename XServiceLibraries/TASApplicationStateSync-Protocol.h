//
#ifndef TASApplicationStateSync_Protocol_h
#define TASApplicationStateSync_Protocol_h
@import Foundation;

@protocol TASApplicationStateSync

@required

/* required instance methods */
- (void)setStateActive;
- (void)setStateInactive;
- (void)setStateBackground;
- (void)setStateWillEnterForeground;

@optional

@end

#endif /* TASApplicationStateSync_Protocol_h */
