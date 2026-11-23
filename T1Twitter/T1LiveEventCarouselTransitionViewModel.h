//
#ifndef T1LiveEventCarouselTransitionViewModel_h
#define T1LiveEventCarouselTransitionViewModel_h
@import Foundation;

#include "T1LiveEventCarouselEntry.h"

@class NSArray, NSObject, NSString, TFSTwitterEntityImageInfo;

@interface T1LiveEventCarouselTransitionViewModel : NSObject

@property (retain, nonatomic) T1LiveEventCarouselEntry *carouselEntry;
@property (readonly, nonatomic) TFSTwitterEntityImageInfo *thumbnailImageInfo;
@property (readonly, nonatomic) _Bool showTransitionTitle;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) _Bool showDisplayName;
@property (readonly, copy, nonatomic) NSString *displayUsername;
@property (readonly, nonatomic) _Bool showDisplayUsername;
@property (readonly, nonatomic) NSArray *userBadges;
@property (readonly, copy, nonatomic) NSString *displayVideoDurationString;
@property (readonly, nonatomic) _Bool showVideoDurationString;
@property (readonly, copy, nonatomic) NSString *broadcastTypeString;
@property (readonly, nonatomic) _Bool showBroadcastBadgeView;
@property (readonly, nonatomic) _Bool broadcastLive;
@property (readonly, nonatomic) _Bool showReplayButton;
@property (readonly, nonatomic) _Bool allowReplayOfCurrentItem;
@property (readonly, nonatomic) unsigned long long displayMode;

/* class methods */
+ (id)viewModelWithCarouselEntry:(id)entry allowReplayOfCurrentItem:(_Bool)item displayMode:(unsigned long long)mode featureSwitches:(id)switches;

/* instance methods */
- (id)initWithCarouselEntrySlate:(id)slate allowReplayOfCurrentItem:(_Bool)item displayMode:(unsigned long long)mode userBadger:(id)badger;
- (id)initWithCarouselEntryVideo:(id)video allowReplayOfCurrentItem:(_Bool)item displayMode:(unsigned long long)mode userBadger:(id)badger;
- (id)initWithCarouselEntryBroadcast:(id)broadcast allowReplayOfCurrentItem:(_Bool)item displayMode:(unsigned long long)mode userBadger:(id)badger;
- (id)initWithCarouselEntryAudiospace:(id)audiospace allowReplayOfCurrentItem:(_Bool)item displayMode:(unsigned long long)mode userBadger:(id)badger;
- (id)initWithCarouselEntryMoment:(id)moment allowReplayOfCurrentItem:(_Bool)item displayMode:(unsigned long long)mode userBadger:(id)badger;
- (_Bool)isEqualToViewModel:(id)model;
- (_Bool)isBroadcastLive;

@end

#endif /* T1LiveEventCarouselTransitionViewModel_h */
