//
#ifndef _TtC18TwitterAudiospaces33AdvancedAudioPlayerStreamingQueue_h
#define _TtC18TwitterAudiospaces33AdvancedAudioPlayerStreamingQueue_h
@import Foundation;

#include "PTVWebRTCVoiceTransformerDelegate-Protocol.h"

@class NSObject, _$sSa -> TwitterAudiospaces.PCMAudioFileProvider;

@interface TwitterAudiospaces.AdvancedAudioPlayerStreamingQueue : NSObject <PTVWebRTCVoiceTransformerDelegate> { // (Swift)
    /* instance variables */
    Swift.Array -> TwitterAudiospaces.PCMAudioFileProvider streamingFileProviders;
}

/* instance methods */
- (void)dealloc;
- (_Bool)ptvWebRTCVoiceTransformerAudioStream:(unsigned int)stream audioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void *x2; } x[1]; } *)list asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd;
- (id)init;

@end

#endif /* _TtC18TwitterAudiospaces33AdvancedAudioPlayerStreamingQueue_h */
