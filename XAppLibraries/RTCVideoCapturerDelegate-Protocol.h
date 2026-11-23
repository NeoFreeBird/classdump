//
#ifndef RTCVideoCapturerDelegate_Protocol_h
#define RTCVideoCapturerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol RTCVideoCapturerDelegate <NSObject>

@required

/* required instance methods */
- (void)capturer:(id)capturer didCaptureVideoFrame:(id)frame;
- (void)capturer:(id)capturer didCaptureVideoFrame:(id)frame;

@optional

@end

#endif /* RTCVideoCapturerDelegate_Protocol_h */
