//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAVEncoderDelegate_Protocol_h
#define PTVAVEncoderDelegate_Protocol_h
@import Foundation;

@protocol PTVAVEncoderDelegate

@required

/* required instance methods */
- (double)makeNTPfor:(double)ntpfor;
- (void)pushMetadata:(id)metadata pts:(double)pts forEncoder:(id)encoder;

@optional

@end

#endif /* PTVAVEncoderDelegate_Protocol_h */
