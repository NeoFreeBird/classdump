//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTACoreBasicStatusView_Protocol_h
#define TTACoreBasicStatusView_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TAVAutoplayViewContainer-Protocol.h"
#include "TFNPreviewable-Protocol.h"
#include "TTACoreStatusViewEventHandler-Protocol.h"
#include "TTACoreStatusViewInlineActions-Protocol.h"
#include "TTACoreStatusViewInlineMedia-Protocol.h"
#include "TTACoreStatusViewModel-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSString, TFNTwitterAccount, TFSTwitterScribeContext, TTACoreStatusLiveEngagementManager, UIView;

@protocol TTACoreBasicStatusView <NSObject, TFNPreviewable>

@required

@property (nonatomic, readonly) id <TTACoreStatusViewModel> viewModel;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, weak) id <TTACoreStatusViewEventHandler> eventHandler;
@property (nonatomic, readonly) UIView *visibleAvatarView;
@property (nonatomic, readonly) UIView *visibleAuthorView;
@property (nonatomic, readonly) UIView *visibleConversationContextView;
@property (nonatomic, readonly) UIView *visibleBodyTextView;
@property (nonatomic, readonly) UIView *visibleMediaForwardView;
@property (nonatomic, readonly) UIView *photoVideoForwardView;
@property (nonatomic, readonly) UIView *visibleInlineActionsView;
@property (nonatomic, readonly) UIView *visibleCardForwardView;
@property (nonatomic, readonly) UIView *visibleJetfuelFrameView;
@property (nonatomic, readonly) UIView *visibleTranslateButton;
@property (nonatomic, readonly) UIView<TTACoreBasicStatusView> *visibleQuotedStatusView;
@property (nonatomic, readonly) UIView *visibleTweetstormIndicatorView;
@property (nonatomic, readonly) UIView<TTACoreBasicStatusView> *mediaForwardStatusView;
@property (nonatomic, readonly) unsigned long long attachmentType;
@property (nonatomic, readonly) unsigned long long secondaryAttachmentType;
@property (nonatomic, readonly) id <TAVAutoplayViewContainer> autoplayPlayerContainer;
@property (nonatomic, readonly) id <TTACoreStatusViewInlineMedia> inlineMedia;
@property (nonatomic, readonly) id <TTACoreStatusViewInlineActions> inlineActions;
@property (nonatomic, weak) TTACoreStatusLiveEngagementManager *livePipelineTweetManager;
@property (nonatomic) _Bool shouldPauseLivePipelineUpdates;
@property (nonatomic, copy) TFSTwitterScribeContext *scribeContext;
@property (nonatomic, readonly) id <TFSTwitterCore.TFSTwitterScribableItem> scribableItem;
@property (nonatomic, retain) id <TFSTwitterCore.TFSTwitterScribableItem> videoAttributionSourceScribableItem;
@property (nonatomic, retain) id <TFSTwitterCore.TFSTwitterScribableItem> quotedTweetLingerScribableItem;
@property (nonatomic, retain) id <TFSTwitterCore.TFSTwitterScribableItem> quotedTweetVideoAttributionSourceScribableItem;
@property (nonatomic, retain) id <TFSTwitterCore.TFSTwitterScribableItem> nestedQuotedStatusScribableItem;
@property (nonatomic, readonly) UIView *visibleTranslateTweetView;
@property (nonatomic, readonly) UIView *visibleUndoInfoView;
@property (nonatomic, copy) NSString *scribeElementForLastViewTappedForTweetDetailNavigation;

/* required instance methods */
- (void)setViewModel:(id)model options:(unsigned long long)options account:(id)account;
- (void)updateTimestamp;

@optional

/* optional instance methods */
- (void)animateOverlayWithImage:(id)image;
- (void)animateOverlayWithImage:(id)image;

@end

#endif /* TTACoreBasicStatusView_Protocol_h */
