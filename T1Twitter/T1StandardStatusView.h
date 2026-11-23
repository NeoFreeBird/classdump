//
#ifndef T1StandardStatusView_h
#define T1StandardStatusView_h
@import Foundation;

#include "T1StatusCarouselScrollObserver.h"
#include "T1StatusCarouselScrollObserverHost-Protocol.h"
#include "T1StatusViewAccessibility.h"
#include "T1StatusViewCombinedViewModel.h"
#include "T1VoiceStatusPlaybackObserver.h"
#include "TAVAutoplayViewContainer-Protocol.h"
#include "TFNComposableViewHost-Protocol.h"
#include "TFNComposableViewLayoutTracer-Protocol.h"
#include "TFNComposableViewPrepareForReuseTracer-Protocol.h"
#include "TTACoreBasicStatusView-Protocol.h"
#include "TTACoreLayoutableStatusView-Protocol.h"
#include "TTACoreStatusViewEventHandler-Protocol.h"
#include "TTACoreStatusViewInlineActions-Protocol.h"
#include "TTACoreStatusViewInlineMedia-Protocol.h"
#include "TTACoreStatusViewLayoutState-Protocol.h"
#include "TTACoreStatusViewModel-Protocol.h"
#include "TUICardViewDelegate-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSString, TFNComposableViewSet, TFNReusableViewCache, TFNTwitterAccount, TFSTwitterScribeContext, TTACoreStatusLiveEngagementManager, UIView;

@interface T1StandardStatusView : UIView <TFNComposableViewHost, T1StatusCarouselScrollObserverHost, TTACoreLayoutableStatusView> {
    /* instance variables */
    T1StatusViewAccessibility *_accessibility;
    T1VoiceStatusPlaybackObserver *_voiceStatusPlaybackObserver;
    _Bool _isInCell;
    id <TFNComposableViewLayoutTracer> _viewLayoutTracer;
    id <TFNComposableViewPrepareForReuseTracer> _prepareForReuseTracer;
    T1StatusCarouselScrollObserver *_carouselScrollObserver;
}

@property (readonly, nonatomic) UIView *visibleInlineActionsView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bodyTextFrame;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } tapLocation;
@property (nonatomic) long long displayRank;
@property (readonly, nonatomic) TFNComposableViewSet *viewSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id <TTACoreStatusViewLayoutState> layoutState;
@property (readonly, nonatomic) NSString *impressionID;
@property (nonatomic) unsigned long long conversationConnectorType;
@property (readonly, weak, nonatomic) id <TUICardViewDelegate> cardViewDelegate;
@property (readonly, nonatomic) _Bool hasURL;
@property (readonly, nonatomic) id <TTACoreStatusViewModel> viewModel;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (weak, nonatomic) id <TTACoreStatusViewEventHandler> eventHandler;
@property (readonly, nonatomic) UIView *visibleAvatarView;
@property (readonly, nonatomic) UIView *visibleAuthorView;
@property (readonly, nonatomic) UIView *visibleConversationContextView;
@property (readonly, nonatomic) UIView *visibleBodyTextView;
@property (readonly, nonatomic) UIView *visibleMediaForwardView;
@property (readonly, nonatomic) UIView *photoVideoForwardView;
@property (readonly, nonatomic) UIView *visibleCardForwardView;
@property (readonly, nonatomic) UIView *visibleJetfuelFrameView;
@property (readonly, nonatomic) UIView *visibleTranslateButton;
@property (readonly, nonatomic) UIView<TTACoreBasicStatusView> *visibleQuotedStatusView;
@property (readonly, nonatomic) UIView *visibleTweetstormIndicatorView;
@property (readonly, nonatomic) UIView<TTACoreBasicStatusView> *mediaForwardStatusView;
@property (readonly, nonatomic) unsigned long long attachmentType;
@property (readonly, nonatomic) unsigned long long secondaryAttachmentType;
@property (readonly, nonatomic) id <TAVAutoplayViewContainer> autoplayPlayerContainer;
@property (readonly, nonatomic) id <TTACoreStatusViewInlineMedia> inlineMedia;
@property (readonly, nonatomic) id <TTACoreStatusViewInlineActions> inlineActions;
@property (weak, nonatomic) TTACoreStatusLiveEngagementManager *livePipelineTweetManager;
@property (nonatomic) _Bool shouldPauseLivePipelineUpdates;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly, nonatomic) id <TFSTwitterCore.TFSTwitterScribableItem> scribableItem;
@property (retain, nonatomic) id <TFSTwitterCore.TFSTwitterScribableItem> videoAttributionSourceScribableItem;
@property (retain, nonatomic) id <TFSTwitterCore.TFSTwitterScribableItem> quotedTweetLingerScribableItem;
@property (retain, nonatomic) id <TFSTwitterCore.TFSTwitterScribableItem> quotedTweetVideoAttributionSourceScribableItem;
@property (retain, nonatomic) id <TFSTwitterCore.TFSTwitterScribableItem> nestedQuotedStatusScribableItem;
@property (readonly, nonatomic) UIView *visibleTranslateTweetView;
@property (readonly, nonatomic) UIView *visibleUndoInfoView;
@property (retain, nonatomic) NSString *scribeElementForLastViewTappedForTweetDetailNavigation;
@property (retain, nonatomic) TFNReusableViewCache *reusableViewCache;

/* class methods */
+ (id)layoutTracingSamplingFractionalPercentageFeatureSwitch;
+ (void)setLayoutTracingSamplingFractionalPercentageBlock:(id /* block */)block;
+ (long long)layoutTracingSamplingFractionalPercentage;
+ (id)layoutStateGenerator;
+ (id)_t1_viewAdapterSet;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame isInCell:(_Bool)cell isDarkBackground:(_Bool)background;
- (id)_t1_updateLayoutState;
- (id)_t1_updateLayoutStateWithLayoutMetrics:(id)metrics;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeWithLayoutMetrics:(id)metrics;
- (id)calculatedLayoutMetrics;
- (_Bool)tfn_terminatesInvalidateIntrinsicContentSizeRecursion;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (void)setViewModel:(id)model options:(unsigned long long)options account:(id)account;
- (id)_t1_viewSetUpdatesWithInfo:(id)info;
- (void)_t1_applyViewModelUpdate:(id)update;
- (void)_t1_updateAccessibility:(id)accessibility;
- (void)updateTimestamp;
- (id)_t1_carouselScrollObserver;
- (id)carouselAvatarViews;
- (id)carouselAttachmentView;
- (_Bool)carouselIndicatorSlotIsFreeForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame excluding:(id)excluding;
- (id)carouselLayoutMetrics;
- (void)_t1_wireCarouselScrollObserverForLayoutState:(id)state;
- (id)visiblePreviewButtonView;
- (void)animateOverlayWithImage:(id)image;
- (void)openURL;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)accessibilityCustomActions;
- (void)_t1_updateAccessibilityValue;
- (void)_t1_updateAccessibilityCustomActions;
- (id)accessibiltyLabelForViewModel:(id)model;
- (id)accessibilityLabel;
- (void)_t1_scribeTweetClick:(id)click;

@end

#endif /* T1StandardStatusView_h */
