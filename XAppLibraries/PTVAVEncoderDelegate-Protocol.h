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
