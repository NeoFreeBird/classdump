//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWebRTCVoiceTransformerDelegate_Protocol_h
#define PTVWebRTCVoiceTransformerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVWebRTCVoiceTransformerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)ptvWebRTCVoiceTransformerAudioStream:(unsigned int)stream audioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void *x2; } x[1]; } *)list asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd;
- (void)ptvWebRTCVoiceTransformerAudioStreamDidReceiveAudioBufferPeak:(id)peak;

@end

#endif /* PTVWebRTCVoiceTransformerDelegate_Protocol_h */
