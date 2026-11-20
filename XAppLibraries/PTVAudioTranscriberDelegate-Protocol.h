//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAudioTranscriberDelegate_Protocol_h
#define PTVAudioTranscriberDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVAudioTranscriberDelegate <NSObject>

@required

/* required instance methods */
- (void)audioTranscriber:(id)transcriber didFinishWithTranscription:(id)transcription;

@optional

@end

#endif /* PTVAudioTranscriberDelegate_Protocol_h */
