//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
