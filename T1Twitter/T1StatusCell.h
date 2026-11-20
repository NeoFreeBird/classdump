//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusCell_h
#define T1StatusCell_h
@import Foundation;

#include "T1AutoplayableContainer-Protocol.h"
#include "T1KeyboardShortcutDelegate-Protocol.h"
#include "T1TimelineStatusViewContainer-Protocol.h"
#include "TAVAutoplayViewContainer-Protocol.h"
#include "TTACoreLayoutableStatusView-Protocol.h"
#include "TTACoreStatusViewEventHandler-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"
#include "UIResponderStandardEditActions-Protocol.h"

@class NSString, TFNTableViewCell, UIImage, UIView;

@interface T1StatusCell : TFNTableViewCell <UIResponderStandardEditActions, TTACoreStatusViewEventHandler, T1TimelineStatusViewContainer, TAVAutoplayViewContainer, T1AutoplayableContainer, T1KeyboardShortcutDelegate> {
    /* instance variables */
    unsigned long long _appearanceTime;
    signed char _loadedStates[4];
    long long _loadedSources[4];
    _Bool _swipeActionsEnabled;
}

@property (readonly, nonatomic) UIView<TTACoreLayoutableStatusView> *statusView;
@property (copy, nonatomic) id /* block */ eventHandlerBlock;
@property (nonatomic) _Bool mediaCarouselRunsThroughGutters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id <TVPPlayerSessionSource> playerSessionSource;
@property (readonly, nonatomic) UIView *playerContainerView;
@property (readonly, nonatomic) UIImage *playerPreviewImage;

/* class methods */
+ (Class)statusViewClass;
+ (id)cellLayoutForViewModel:(id)model options:(unsigned long long)options account:(id)account layoutMetrics:(id)metrics withPreviousLayout:(id)layout;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)innerContentViewForSwipe;
- (id)onSwipeRight;
- (id)onSwipeLeft;
- (_Bool)_t1_isSwipeActionAvailable:(long long)available;
- (id)getSwipeActionDelegateForAction:(long long)action logAction:(id)action;
- (_Bool)swipeActionAnimationsSupported;
- (void)setSwipeActionsEnabled:(_Bool)enabled;
- (id)statusViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setCellLayout:(id)layout;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_imageDurationFinished:(unsigned long long)finished error:(id)error source:(long long)source index:(unsigned long long)index;
- (void)_imageFailedToLoad:(unsigned long long)load error:(id)error source:(long long)source index:(unsigned long long)index;
- (void)_imageDidLoad:(unsigned long long)load source:(long long)source index:(unsigned long long)index;
- (void)_imageLostVisibilityBeforeLoad:(unsigned long long)load index:(unsigned long long)index;
- (void)didDisplayInDataViewController:(id)controller atIndexPath:(id)path visibleIntersection:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })intersection;
- (void)didEndDisplayingInDataViewController:(id)controller reason:(unsigned long long)reason;
- (void)animateHighlightedFlash:(id /* block */)flash;
- (void)_t1_accountUserDefaultsDidUpdate:(id)update;
- (void)_handlePhotoLoadedEvent:(unsigned long long)event imageIndex:(id)index source:(long long)source error:(id)error;
- (id)_interceptStatusViewEvent:(id)event withOriginalReturnValue:(id)value;
- (id)handleStatusViewEvent:(id)event;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (id)accessibilityCustomActions;
- (id)autoplayable;
- (id)quotedAutoplayable;
- (void)setReusableViewCache:(id)cache;
- (_Bool)canPerformAction:(SEL)action withSender:(id)sender;
- (_Bool)_t1_canHandleInlineActionType:(unsigned long long)type;
- (void)handleReplyKeyCommand;
- (void)handleLikeKeyCommand;
- (void)handleUndoLikeKeyCommand;
- (void)handleDownvoteKeyCommand;
- (void)handleUndoDownvoteKeyCommand;
- (void)handleRetweetKeyCommand;
- (void)handleUndoRetweetKeyCommand;
- (void)_t1_handleInlineActionType:(unsigned long long)type;
- (_Bool)_t1_canHandleBookmarkKeyCommand;
- (void)handleBookmarkKeyCommand;
- (void)handleViewUserKeyCommand;
- (_Bool)_t1_canHandleOpenMediaKeyCommand;
- (void)handleOpenMediaKeyCommand;
- (_Bool)_t1_canHandleOpenQuotedTweetCommand;
- (void)handleOpenQuotedTweetKeyCommand;
- (_Bool)_t1_canHandleOpenURLKeyCommand;
- (void)handleOpenURLKeyCommand;
- (_Bool)_t1_canHandleCopyCommand;
- (void)copy:(id)copy;
- (void)handleTweetLinkCopyKeyCommand;
- (void)_t1_presentUndoWithheldRetweetActionSheet;

@end

#endif /* T1StatusCell_h */
