//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVUserChatSectionCompositeViewController_h
#define PTVUserChatSectionCompositeViewController_h
@import Foundation;

#include "PTVBroadcastWatcher.h"
#include "PTVChatSectionCompositeViewController.h"
#include "PTVModalPresentationManagerDelegate-Protocol.h"

@class NSString;

@interface PTVUserChatSectionCompositeViewController : PTVChatSectionCompositeViewController <PTVModalPresentationManagerDelegate> {
    /* instance variables */
    PTVUserChatSectionCompositeViewController *_weakSelf;
}

@property (readonly, nonatomic) PTVBroadcastWatcher *watcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)participantsBarViewController:(id)controller didTapOnParticipant:(id)participant;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)disappear;
- (id)initWithDelegate:(id)delegate broadcastController:(id)controller useLargeChatFont:(_Bool)font watchBroadcastAnalyticsManager:(id)manager;
- (_Bool)canReply;
- (void)replyToMessage:(id)message;
- (void)replyToUsername:(id)username;
- (void)didTapMessage:(id)message;
- (void)presentActionSheet:(id)sheet;
- (void)didSelectComposeMessageWhilePunished;
- (void)presentBroadcast:(id)broadcast withWatchContext:(id)context inCollection:(id)collection;
- (void)presentUserModalForUserId:(id)id configureBlock:(id /* block */)block;
- (id)compositeView;
- (void)setFlaggedMessage:(id)message;
- (void)setReportType:(unsigned long long)type;
- (void)setModerationVotingDuration:(double)duration;
- (void)setModerationVotingState:(long long)state;
- (void)highlightPunishmentUX;
- (void)setRetweetButtonImage:(id)image selectedTintColor:(id)color;
- (void)setRetweetButtonVisible:(_Bool)visible animated:(_Bool)animated;
- (_Bool)isComposingMessage;
- (_Bool)beginComposingMessage;
- (_Bool)endComposingMessage;

@end

#endif /* PTVUserChatSectionCompositeViewController_h */
