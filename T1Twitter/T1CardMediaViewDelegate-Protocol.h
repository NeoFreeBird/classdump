//
#ifndef T1CardMediaViewDelegate_Protocol_h
#define T1CardMediaViewDelegate_Protocol_h
@import Foundation;

@protocol T1CardMediaViewDelegate

@required

/* required instance methods */
- (void)cardMediaView:(id)view didReceivePlayButtonActionWithEvent:(id)event;

@optional

@end

#endif /* T1CardMediaViewDelegate_Protocol_h */
