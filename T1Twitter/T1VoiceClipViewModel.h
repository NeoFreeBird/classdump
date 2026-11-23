//
#ifndef T1VoiceClipViewModel_h
#define T1VoiceClipViewModel_h
@import Foundation;

#include "T1VoicePlayableViewModel-Protocol.h"
#include "TCRVoiceViewModel-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"
#include "TTACoreStatusViewModel-Protocol.h"

@class NSArray, NSObject, NSString, TAVPlayer, TFNTwitterAccount, UIColor;

@interface T1VoiceClipViewModel : NSObject <TCRVoiceViewModel, T1VoicePlayableViewModel>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) id <TTACoreStatusViewModel> statusViewModel;
@property (retain, nonatomic) NSArray *convertedAudiowaveValues;
@property (retain, nonatomic) TAVPlayer *player;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> user;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> representedUser;
@property (readonly, nonatomic) NSString *durationString;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double totalDuration;
@property (readonly, nonatomic) NSString *positionString;
@property (readonly, nonatomic) NSArray *audiowaveValues;
@property (readonly, nonatomic) NSString *bodyText;
@property (readonly, nonatomic) unsigned long long brightnessOffset;
@property (readonly, nonatomic) _Bool captionsEnabled;
@property (readonly, nonatomic) _Bool transcriptionsEnabled;
@property (readonly, nonatomic) NSString *deadMediaAvailabilityReason;
@property (readonly, nonatomic) NSString *deadMediaCopyrightHolderName;
@property (readonly, nonatomic) _Bool isMediaOwner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id <TTACoreStatusViewModel> representedStatusViewModel;
@property (readonly, nonatomic) NSString *playerIdentifier;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) _Bool isPlaying;
@property (readonly, nonatomic) _Bool isPaused;
@property (nonatomic) _Bool isMuted;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithAccount:(id)account statusViewModel:(id)model;
- (id)_t1_representedStatus;
- (id)_t1_voiceInfo;
- (void)imageWithCompletion:(id /* block */)completion;
- (id)playerFactoryIdentifier;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToViewModel:(id)model;
- (_Bool)isRepresentingStatus:(id)status;
- (void)togglePlayback;
- (void)play;
- (void)pause;
- (void)seekToTime:(double)time;

@end

#endif /* T1VoiceClipViewModel_h */
