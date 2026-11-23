//
#ifndef TULProgressLiveActivityControllerObserver_Protocol_h
#define TULProgressLiveActivityControllerObserver_Protocol_h
@import Foundation;

@protocol TULProgressLiveActivityControllerObserver

@required

/* required instance methods */
- (void)progressLiveActivityControllerDidEnd:(id)end;

@optional

@end

#endif /* TULProgressLiveActivityControllerObserver_Protocol_h */
