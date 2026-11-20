//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastOverflowMenuTitleView_h
#define PTVBroadcastOverflowMenuTitleView_h
@import Foundation;

#include "PTVBroadcastController.h"
#include "PTVBroadcastControllerObserver-Protocol.h"
#include "PTVBroadcastOverflowMenuViewDelegate-Protocol.h"
#include "PTVBroadcastPillView.h"
#include "PTVTimeCodePillView.h"

@class NSString, UILabel, UIStackView, UITextView;

@interface PTVBroadcastOverflowMenuTitleView : UIStackView <PTVBroadcastControllerObserver> {
    /* instance variables */
    PTVBroadcastOverflowMenuTitleView *_weakSelf;
    long long _participantsCount;
    PTVBroadcastPillView *_pillView;
    UITextView *_broadcastTitleTextView;
    UILabel *_broadcastLocationLabel;
    _Bool _hasClickableHashTags;
    PTVTimeCodePillView *_timeCodePillView;
}

@property (weak, nonatomic) id <PTVBroadcastOverflowMenuViewDelegate> delegate;
@property (readonly, nonatomic) PTVBroadcastController *broadcastController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)broadcastControllerBroadcastBroadcastingTitleDidChange:(id)change;
- (void)broadcastControllerBroadcastLocationTitleDidChange:(id)change;
- (void)broadcastControllerBroadcastBestEndDateDidChange:(id)change;
- (void)broadcastControllerBroadcastNWatchingTotalDidChange:(id)change;
- (void)broadcastControllerBroadcastNTotalWatchedDidChange:(id)change;
- (void)broadcastControllerBroadcastShareDataDidChange:(id)change;
- (void)broadcastController:(id)controller didUpdatePlaybackPointFrom:(id)from;
- (void)broadcastControllerBroadcastReplayTitleEditedDidChange:(id)change;
- (void)broadcastControllerBroadcastAcceptsGuestsDidChange:(id)change;
- (id)initWithBroadcastController:(id)controller showFeaturedPill:(_Bool)pill hasClickableHashTags:(_Bool)tags delegate:(id)delegate;
- (id)broadcast;
- (id)broadcastTitleTextView;
- (void)updateBroadcastTitleTextView;
- (id)broadcastTitleLabelFont;
- (id)attributedBroadcastTitle;
- (id)broadcastLocationLabel;
- (id)broadcastLocationLabelFont;
- (void)updateBroadcastLocationLabel;
- (id)pillView;
- (void)updateParticipantsCount:(long long)count;
- (void)updatePillView;
- (void)updateTimeCodePillView;

@end

#endif /* PTVBroadcastOverflowMenuTitleView_h */
