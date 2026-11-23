//
#ifndef PTVBroadCastView_h
#define PTVBroadCastView_h
@import Foundation;

#include "PTVBlurredImageView.h"
#include "PTVBroadcastControlsDelegate-Protocol.h"
#include "PTVBroadcastControlsDrawerView.h"
#include "PTVBroadcastControlsOverlayView.h"
#include "PTVBroadcastScrollView.h"
#include "PTVBroadcastScrollViewDelegate-Protocol.h"
#include "PTVBroadcastViewDelegate-Protocol.h"
#include "PTVPreBroadcastView.h"
#include "PTVPreBroadcastViewDelegate-Protocol.h"
#include "PTVRoundedButton.h"
#include "PTVScrollView.h"
#include "PTVScrollViewDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, NSTimer, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface PTVBroadCastView : UIView <PTVBroadcastControlsDelegate, UITextViewDelegate, PTVBroadcastScrollViewDelegate, PTVPreBroadcastViewDelegate, UIGestureRecognizerDelegate, PTVScrollViewDelegate> {
    /* instance variables */
    PTVBroadCastView *_weakSelf;
    _Bool _willDismiss;
    struct CGPoint { double x; double y; } _dismissOffset;
    PTVScrollView *_parentScrollView;
    UIView *_scrollViewPartialBackground;
    UILabel *_dismissLabel;
    UIImageView *_topFade;
    UIView *_publisherView;
    PTVRoundedButton *_dismissButton;
    PTVBroadcastControlsDrawerView *_broadcastControlsDrawer;
    UIView *_videoOverlayView;
    UIView *_videoBorder;
    UIView *_videoBorderBottom;
    NSArray *_accessibilityElements;
    PTVBlurredImageView *_backgroundBlurredImageView;
    PTVBlurredImageView *_cellImageBlurred;
    UIView *_cellImageFade;
    unsigned long long _broadcastViewState;
    double _fadeOffset;
    NSLayoutConstraint *_dismissButtonTopConstraint;
    NSLayoutConstraint *_dismissButtonRightConstraint;
    UITapGestureRecognizer *_showControlsAndAdjustFocusTap;
    _Bool _visible;
    PTVBroadcastControlsOverlayView *_broadcastControlsOverlay;
    _Bool _currentlyRotating;
    unsigned long long _broadcastingCamera;
    UIView *_scrollViewContentArea;
    NSLayoutConstraint *_contentViewTopLayoutConstraint;
    _Bool _dismissButtonDidChangeSuperview;
    _Bool _hasPreBroadcastView;
}

@property (retain, nonatomic) NSTimer *hideBroadcastControlsTimer;
@property (retain, nonatomic) PTVBroadcastScrollView *scrollView;
@property (nonatomic) _Bool broadcastControlsDrawerIsOpen;
@property (retain, nonatomic) UIView *replayVideoView;
@property (readonly, nonatomic) _Bool keyboardShown;
@property (readonly, nonatomic) _Bool broadcastControlsOverlayVisible;
@property (weak, nonatomic) id <PTVBroadcastViewDelegate> delegate;
@property (nonatomic) _Bool sharingLocation;
@property (readonly, nonatomic) PTVPreBroadcastView *preBroadcast;
@property (retain, nonatomic) UIView *paletteView;
@property (readonly, nonatomic) double audioVisualizerOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)layoutPreBroadcast;
- (void)updateSubviewSafeAreaMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (void)layoutInstalledView;
- (void)broadcastControlsStop:(id)stop;
- (void)broadcastControlsFlipCamera:(id)camera;
- (void)broadcastControlsMute:(id)mute;
- (void)broadcastControlsAudioScope:(id)scope;
- (void)broadcastControlsLeave:(id)leave;
- (void)broadcastScrollView:(id)view contentOffsetChanged:(struct CGPoint { double x0; double x1; })changed;
- (void)broadcastScrollView:(id)view willBeginDragging:(struct CGPoint { double x0; double x1; })dragging;
- (_Bool)touchesShouldCancelInContentView:(id)view;
- (_Bool)ptvScrollViewShouldReceiveTouch:(id)touch;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (void)willBeginSwipeToDismiss;
- (void)didUpdateSwipeToDismiss:(id)dismiss;
- (_Bool)shouldCompleteSwipeToDismiss:(id)dismiss;
- (void)didCancelSwipeToDismiss;
- (void)didCompleteSwipeToDismiss:(id)dismiss;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (_Bool)preBroadcastView:(id)view didChangeLocationServicesTo:(_Bool)to;
- (void)preBroadcastView:(id)view didStartBroadcastWithText:(id)text sharingLocation:(_Bool)location;
- (void)preBroadcastViewDidPressAudienceSelector:(id)selector;
- (void)preBroadcastViewDidPressShareTwitterButton:(id)button;
- (void)preBroadcastViewDidPressChatTypeButton:(id)button withChatType:(unsigned long long)type;
- (void)preBroadcastViewDidPressBackToSourceButton:(id)button;
- (void)preBroadcastViewDidGestureFlipCamera:(id)camera;
- (void)preBroadcastViewDidEditBroadcastTitle;
- (void)preBroadcastViewDidChangeSelectionOfBroadcastTitleTextView:(id)view;
- (void)preBroadcastViewDidPressAcceptGifts:(id)gifts;
- (void)preBroadcastViewDidPressAcceptGuestBroadcasting:(id)broadcasting;
- (void)preBroadcastViewDidPressAudioScope:(id)scope;
- (id)initWithDelegate:(id)delegate videoOverlayView:(id)view initialState:(unsigned long long)state initialTitle:(id)title hasShareLocationOption:(_Bool)option shareLocationEnabled:(_Bool)enabled chatType:(unsigned long long)type hasShareTwitterOption:(_Bool)option shareOnTwitter:(_Bool)twitter cameFromTwitter:(_Bool)twitter twitterUsername:(id)username sourceName:(id)name hasPrivateBroadcastOption:(_Bool)option isExternalEncoderBroadcast:(_Bool)broadcast hasPreBroadcastView:(_Bool)view shouldShowBroadcastControls:(_Bool)controls;
- (void)setPipelineContainerView:(id)view publishingHitTestProxyView:(id)view publishingDebugLabel:(id)label;
- (void)removePipelineContainerViewIfNeeded:(id)needed;
- (void)setReplayVideoViewVisible:(_Bool)visible animated:(_Bool)animated;
- (void)setDebugLabel:(id)label;
- (void)setShareTwitterButtonState:(unsigned long long)state displayTooltipIfNeeded:(_Bool)needed;
- (void)setBroadcastViewState:(unsigned long long)state;
- (void)setAudienceReference:(id)reference;
- (void)setPrivateButtonEnabled:(_Bool)enabled;
- (void)setChatType:(unsigned long long)type;
- (void)setExternalSourceImages:(id)images;
- (void)setBroadcastControlsOverlayVisible:(_Bool)visible withDuration:(double)duration;
- (void)setStartBroadcastButtonState:(unsigned long long)state;
- (void)setIsMuted:(_Bool)muted;
- (void)setBackgroundImage:(id)image;
- (void)setImageURL:(id)url;
- (void)setBroadcastingCamera:(unsigned long long)camera;
- (void)setAllowsLeaveBroadcast:(_Bool)broadcast;
- (void)setFlipLabelHidden:(_Bool)hidden;
- (void)setIsAcceptGiftsSupported:(_Bool)supported;
- (void)setAcceptGiftsSelected:(_Bool)selected;
- (void)setIsGuestBroadcastingSupported:(_Bool)supported;
- (void)setIsGuestBroadcastingSelected:(_Bool)selected;
- (void)setIsAudioScopeSupported:(_Bool)supported;
- (void)setIsAudioScopeSelected:(_Bool)selected;
- (void)executeState;
- (void)dismissInstructions:(_Bool)instructions shouldAnimate:(_Bool)animate;
- (void)updateAlphaForInsructionsVisible:(_Bool)visible;
- (void)broadcastControlsAlphaState;
- (void)videoOverlayAlphaState;
- (void)preBroadcastState;
- (void)cellImageAndShadeState;
- (void)scrollEnabledState;
- (void)broadcastControlsDrawerVisibilityState;
- (void)overlayTapState;
- (void)dismissPressed;
- (void)viewDidAppear;
- (void)becomeFirstResponderIfNeeded;
- (void)viewWillDisappear;
- (void)showFirstTimeTooltips;
- (void)showTwitterTooltips;
- (void)showCameFromTwitterTooltip;
- (void)showGuestBroadcastingTooltip;
- (void)hideAllTooltipsAnimated:(_Bool)animated;
- (void)keyboardWillShowWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame curve:(long long)curve duration:(float)duration;
- (void)keyboardWillHideWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame curve:(long long)curve duration:(float)duration;
- (void)openControlsDrawer;
- (void)closeControlsDrawer;
- (void)handleOverlayTap:(id)tap;
- (void)startHideBroadcastControlsTimer;
- (_Bool)gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)index;
- (long long)indexOfAccessibilityElement:(id)element;
- (void)willChangeToNewOrientation:(long long)orientation;
- (void)didChangeToNewOrientation:(long long)orientation;
- (void)updateAlphaForNewOrientationChange;
- (void)didFinishAnimatingAfterOrientationChange;
- (void)showDismissButtonAnimated:(_Bool)animated;
- (void)hideDismissButtonAnimated:(_Bool)animated;
- (void)setDismissButtonVisible:(_Bool)visible animated:(_Bool)animated duration:(double)duration;

@end

#endif /* PTVBroadCastView_h */
