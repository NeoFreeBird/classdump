//
#ifndef TASEmojisModelObserver_Protocol_h
#define TASEmojisModelObserver_Protocol_h
@import Foundation;

@protocol TASEmojisModelObserver

@required

/* required instance methods */
- (void)emojisModelDidUpdatePreferences;

@optional

@end

#endif /* TASEmojisModelObserver_Protocol_h */
