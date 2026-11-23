//
#ifndef T1VoiceTrackViewModel_h
#define T1VoiceTrackViewModel_h
@import Foundation;

#include "T1VoicePlayableCollectionViewModel-Protocol.h"
#include "T1VoiceTrackThreadLoader.h"
#include "T1VoiceTrackThreadLoaderObserver-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"
#include "TTACoreStatusViewModel-Protocol.h"

@class NSAttributedString, NSHashTable, NSMutableArray, NSNumber, NSObject, NSString, TAVPlayer, TFNTwitterAccount, TFSTwitterEntityMedia, TUIUserBadge, TUIUserBadger;

@interface T1VoiceTrackViewModel : NSObject <TAVPlaybackObserver, T1VoiceTrackThreadLoaderObserver, T1VoicePlayableCollectionViewModel>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) id <TTACoreStatusViewModel> sourceStatusViewModel;
@property (retain, nonatomic) NSMutableArray *clipViewModels;
@property (nonatomic) long long currentClipIndex;
@property (retain, nonatomic) NSNumber *cachedDurationUpToCurrentIndex;
@property (retain, nonatomic) NSNumber *cachedDuration;
@property (retain, nonatomic) TAVPlayer *currentPlayer;
@property (nonatomic) _Bool isTransitioningPlayers;
@property (nonatomic) _Bool hasFinishedLoading;
@property (retain, nonatomic) T1VoiceTrackThreadLoader *threadLoader;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) TUIUserBadger *userBadger;
@property (nonatomic) double progress;
@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) TFSTwitterEntityMedia *imageMediaEntity;
@property (readonly, nonatomic) TUIUserBadge *representedStatusUserBadge;
@property (readonly, nonatomic) NSAttributedString *titleAttributedString;
@property (readonly, nonatomic) NSAttributedString *subtitleAttributedString;
@property (readonly, nonatomic) NSString *accessibilityString;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> representedUser;
@property (readonly, nonatomic) NSString *shortBodyText;
@property (readonly, nonatomic) _Bool hasPrevious;
@property (readonly, nonatomic) _Bool hasNext;
@property (readonly, nonatomic) id <TTACoreStatusViewModel> representedStatusViewModel;
@property (readonly, nonatomic) NSString *playerIdentifier;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) _Bool isPlaying;
@property (readonly, nonatomic) _Bool isPaused;
@property (nonatomic) _Bool isMuted;

/* instance methods */
- (id)init:(id)init statusViewModel:(id)model;
- (void)fetchThread;
- (id)_t1_currentClipViewModel;
- (double)_t1_durationUpToIndex:(long long)index;
- (double)_t1_durationUpToCurrentIndex;
- (void)_t1_jumpToIndex:(long long)index atTime:(double)time;
- (void)notifyObserversWithBlock:(id /* block */)block;
- (void)_t1_notifyPlaybackUpdate;
- (void)_t1_notifyClipUpdate;
- (void)threadLoaderDidUpdate:(id)update;
- (id)_t1_voiceStatusesInTimelineItems:(id)items;
- (void)_t1_attachPlayerWithTime:(double)time;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (_Bool)isRepresentingStatus:(id)status;
- (void)seekToTime:(double)time;
- (void)togglePlayback;
- (void)play;
- (void)pause;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (_Bool)containsStatus:(id)status;
- (void)skipToStatus:(id)status;
- (void)skipToPrevious;
- (void)skipToNext;
- (id)titleAttributedStringWithProgress:(double)progress;
- (id)accessibilityStringCurrentlyPlaying:(_Bool)playing withProgress:(double)progress;
- (id)_t1_badgeAttributedStringWithFont:(id)font;
- (id)_t1_durationStringWithProgress:(double)progress;
- (id)currentTimeStringWithProgres:(double)progres;
- (id)timeRemainingStringWithProgres:(double)progres;
- (id)_t1_accessibleDurationRemainingStringWithProgress:(double)progress;
- (id)speakerNameWithBadgeAttributedStringWithFont:(id)font;
- (id)timeStampString;

@end

#endif /* T1VoiceTrackViewModel_h */
