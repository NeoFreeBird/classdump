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
