//
#ifndef T1VideoCaptionsViewDelegate_Protocol_h
#define T1VideoCaptionsViewDelegate_Protocol_h
@import Foundation;

@protocol T1VideoCaptionsViewDelegate

@required

/* required instance methods */
- (void)videoCaptionsView:(id)view enableCaptions:(_Bool)captions;
- (void)videoCaptionsView:(id)view legibleMediaSelectionOption:(id)option;

@optional

@end

#endif /* T1VideoCaptionsViewDelegate_Protocol_h */
