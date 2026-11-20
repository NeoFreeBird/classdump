//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
