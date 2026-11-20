//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastIntroView_h
#define PTVBroadcastIntroView_h
@import Foundation;

#include "PTVBroadcastController.h"
#include "PTVBroadcastControllerObserver-Protocol.h"
#include "PTVBroadcastIntroViewDelegate-Protocol.h"
#include "PTVBroadcastOverflowMenuTitleView.h"
#include "PTVChatControllerObserver-Protocol.h"
#include "PTVProfileImageView.h"
#include "PTVProfileImageViewDelegate-Protocol.h"
#include "PTVVideoOverlayContent-Protocol.h"

@class NSString, UILabel, UIView;

@interface PTVBroadcastIntroView : UIView <PTVProfileImageViewDelegate, PTVBroadcastControllerObserver, PTVChatControllerObserver, PTVVideoOverlayContent> {
    /* instance variables */
    UIView *_contentContainerView;
    PTVBroadcastOverflowMenuTitleView *_titleView;
    PTVProfileImageView *_profileImageView;
    UILabel *_subtitleLabel;
}

@property (readonly, nonatomic) PTVBroadcastController *broadcastController;
@property (weak, nonatomic) id <PTVBroadcastIntroViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)AttributedSubtitleForBroadcast:(id)broadcast;

/* instance methods */
- (void)broadcastControllerBroadcastProfileImageURLDidChange:(id)change;
- (void)broadcastControllerBroadcastUserDisplayNameDidChange:(id)change;
- (void)broadcastControllerBroadcastUserNameDidChange:(id)change;
- (void)chatController:(id)controller didReceiveChatRoomPresenceEvent:(id)event;
- (void)profileImagePressed:(id)pressed;
- (id)videoOverlayContentHeightAnchor;
- (id)initWithDelegate:(id)delegate broadcastController:(id)controller;
- (void)updateProfileImage;
- (void)updateSubtitle;
- (void)didReceiveTap;
- (void)didTapBroadcaster;

@end

#endif /* PTVBroadcastIntroView_h */
