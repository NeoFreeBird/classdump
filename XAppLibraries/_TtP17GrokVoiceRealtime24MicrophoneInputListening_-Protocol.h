//
#ifndef _TtP17GrokVoiceRealtime24MicrophoneInputListening__Protocol_h
#define _TtP17GrokVoiceRealtime24MicrophoneInputListening__Protocol_h
@import Foundation;

@class NSString;

@protocol GrokVoiceRealtime.MicrophoneInputListening

@required

@property (nonatomic, readonly) NSString *label;

/* required instance methods */
- (void)didReceiveInputWithBuffer:(id)buffer time:(id)time;

@optional

@end

#endif /* _TtP17GrokVoiceRealtime24MicrophoneInputListening__Protocol_h */
