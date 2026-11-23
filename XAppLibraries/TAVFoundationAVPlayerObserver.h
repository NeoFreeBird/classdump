//
#ifndef TAVFoundationAVPlayerObserver_h
#define TAVFoundationAVPlayerObserver_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TAVFoundationAVPlayerObserverInternalState.h"
#include "TAVKVOProxy.h"

@class AVPlayer, NSObject;
@protocol OS_dispatch_queue;

@interface TAVFoundationAVPlayerObserver : NSObject

@property (readonly, nonatomic) AVPlayer *avPlayer;
@property (readonly, nonatomic) id timeJumpObserver;
@property (readonly, nonatomic) id timeUpdateObserver;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalStateQueue;
@property (retain, nonatomic) id <NSObject> timebaseEffectiveRateChangedObserver;
@property (retain, nonatomic) id <NSObject> didPlayToEndTimeObserver;
@property (retain, nonatomic) id <NSObject> mediaSelectionDidChangeObserver;
@property (readonly, nonatomic) TAVKVOProxy *kvoProxy;
@property (readonly, nonatomic) TAVFoundationAVPlayerObserverInternalState *internalState;
@property (readonly, nonatomic) _Bool isPlaybackPollingReduced;
@property (nonatomic) _Bool useSeekableRangeForDurationIfNeeded;

/* instance methods */
- (id)initWithAVPlayer:(id)avplayer delegate:(id)delegate;
- (void)synchronize:(id /* block */)synchronize;
- (void)restartingWithPlayerItem:(id)item;
- (void)sync_mediaSelectionGroups;
- (id)sync_itemSnapshot;
- (id)sync_playerSnapshot;
- (void)sync_updateSnapshotIfReady;
- (void)sync_readBlockingAVPlayerItemProperties;
- (void)timeObserver_handleTimeJump:(struct { long long x0; int x1; unsigned int x2; long long x3; })jump;
- (void)timeObserver_handleTimeUpdate:(struct { long long x0; int x1; unsigned int x2; long long x3; })update;
- (void)kvo_willChangeCurrentItem;
- (void)kvo_didChangeCurrentItem:(id)item;
- (void)kvo_willChangeTimebase;
- (void)kvo_didChangeTimebase:(struct OpaqueCMTimebase *)timebase;
- (void)kvo_willChangeObservedValue;
- (void)kvo_didChangeObservedValueForKeyPath:(id)path newValue:(id)value;
- (void)errorLogEntryNotification:(id)notification;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)dealloc;
- (id)init;

@end

#endif /* TAVFoundationAVPlayerObserver_h */
