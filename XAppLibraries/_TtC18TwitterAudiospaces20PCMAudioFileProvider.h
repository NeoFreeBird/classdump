//
#ifndef _TtC18TwitterAudiospaces20PCMAudioFileProvider_h
#define _TtC18TwitterAudiospaces20PCMAudioFileProvider_h
@import Foundation;

#include "PTVWebRTCVoiceTransformerDelegate-Protocol.h"

@class AVAudioFile, Swift.Bool, _$sSf, _$sSo16AVAudioPCMBufferCSg, _$ss6UInt32VMn;

@interface TwitterAudiospaces.PCMAudioFileProvider : AVAudioFile <PTVWebRTCVoiceTransformerDelegate> { // (Swift)
    /* instance variables */
    Swift.Float volume;
    Swift.Bool loop;
    Swift.Bool isPlaying;
    Swift.Bool mute;
    Swift.Bool inputSourceMute;
    Swift.Bool didCompletePlay;
    __C.AVAudioPCMBuffer? pcmBuffer;
    nominal type descriptor for Swift.UInt32 currentFrame;
    __C.AVAudioPCMBuffer? streamPCMBuffer;
}

/* instance methods */
- (_Bool)ptvWebRTCVoiceTransformerAudioStream:(unsigned int)stream audioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void *x2; } x[1]; } *)list asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd;
- (id)init;
- (id)initForReading:(id)reading error:(id *)error;
- (id)initForReading:(id)reading commonFormat:(unsigned long long)format interleaved:(_Bool)interleaved error:(id *)error;
- (id)initForWriting:(id)writing settings:(id)settings error:(id *)error;
- (id)initForWriting:(id)writing settings:(id)settings commonFormat:(unsigned long long)format interleaved:(_Bool)interleaved error:(id *)error;

@end

#endif /* _TtC18TwitterAudiospaces20PCMAudioFileProvider_h */
