//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceStatusPlaybackObserver_h
#define T1VoiceStatusPlaybackObserver_h
@import Foundation;

#include "T1VoiceClipViewModel.h"
#include "TAVPlaybackObserver-Protocol.h"

@class NSObject, TAVPlayer;

@interface T1VoiceStatusPlaybackObserver : NSObject <TAVPlaybackObserver>

@property (retain, nonatomic) T1VoiceClipViewModel *voiceClipViewModel;
@property (retain, nonatomic) TAVPlayer *player;
@property (nonatomic) _Bool playing;
@property (copy, nonatomic) id /* block */ playbackChangeCallback;

/* instance methods */
- (id)initWithVoiceClipViewModel:(id)model callback:(id /* block */)callback;
- (void)dealloc;
- (void)player:(id)player didUpdatePlaybackState:(id)state;

@end

#endif /* T1VoiceStatusPlaybackObserver_h */
