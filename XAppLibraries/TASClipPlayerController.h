//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASClipPlayerController_h
#define TASClipPlayerController_h
@import Foundation;

#include "TASClipModelObserver-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"

@class NSObject;

@interface TASClipPlayerController : NSObject <TAVPlaybackObserver, TASClipModelObserver> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 delegate;
    @40@0:8:16@24@32 clipModel;
    @40@0:8:16@24@32 hasSeekedToClipStartTime;
    @40@0:8:16@24@32 clipTranscriptReader;
    @40@0:8:16@24@32 loopTimer;
    @40@0:8:16@24@32 playback;
    @40@0:8:16@24@32 playbackTimeRemaining;
    @40@0:8:16@24@32 currentCaption;
    @40@0:8:16@24@32 currentSpeaker;
    @40@0:8:16@24@32 currentAudioLevel;
}

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)clipModelDidUpdateState:(id)state from:(long long)from;
- (void)clipModel:(id)model didReceiveClosedCaptionText:(id)text isTranscriptionFinal:(_Bool)final language:(id)language deliveryDate:(id)date fromUser:(id)user;
- (void)clipModel:(id)model didUpdatePlayback:(id)playback;
- (void)clipModelDidUpdateAudioLevels:(id)levels;
- (void)clipModel:(id)model didUpdateTranscription:(id)transcription;
- (id)init;

@end

#endif /* TASClipPlayerController_h */
