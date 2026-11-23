//
#ifndef T1VoicePlayableViewModel_Protocol_h
#define T1VoicePlayableViewModel_Protocol_h
@import Foundation;

#include "TTACoreStatusViewModel-Protocol.h"

@class NSString;

@protocol T1VoicePlayableViewModel

@required

@property (readonly, nonatomic) id <TTACoreStatusViewModel> representedStatusViewModel;
@property (readonly, nonatomic) NSString *playerIdentifier;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) _Bool isPlaying;
@property (readonly, nonatomic) _Bool isPaused;
@property (nonatomic) _Bool isMuted;

/* required instance methods */
- (_Bool)isRepresentingStatus:(id)status;
- (void)play;
- (void)pause;
- (void)togglePlayback;
- (void)seekToTime:(double)time;

@optional

@end

#endif /* T1VoicePlayableViewModel_Protocol_h */
