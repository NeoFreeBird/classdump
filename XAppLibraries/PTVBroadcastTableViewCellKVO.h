//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastTableViewCellKVO_h
#define PTVBroadcastTableViewCellKVO_h
@import Foundation;

#include "PTVBroadcast.h"
#include "PTVBroadcastTableViewCell.h"
#include "PTVBroadcastTableViewCellKVODelegate-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"

@class NSObject;

@interface PTVBroadcastTableViewCellKVO : PTVBroadcastTableViewCell {
    /* instance variables */
    PTVBroadcastTableViewCellKVO *_weakSelf;
    _Bool _observingBroadcast;
}

@property (retain, nonatomic) PTVBroadcast *broadcast;
@property (retain, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (nonatomic) _Bool prioritizeLocationAsSubtitle;
@property (weak, nonatomic) id <PTVBroadcastTableViewCellKVODelegate> broadcastCellDelegate;
@property (nonatomic) _Bool usesLongerStyleAgoString;

/* instance methods */
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (_Bool)_observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)unobserve;
- (void)observe;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)profileImagePressed:(id)pressed;
- (void)didPressAccessoryLabelOfProfileImageView:(id)view;
- (void)subtitleStateDidChange;
- (void)socialProofStateDidChange;
- (void)broadcasterProfileImageURLDidChange;
- (void)preferredImageURLDidChange;
- (void)liveViewersStateDidChange;
- (void)timeAgoStateChanged;
- (void)nTotalWatchedChanged;
- (void)replayAvailabilityStateDidChange;

@end

#endif /* PTVBroadcastTableViewCellKVO_h */
