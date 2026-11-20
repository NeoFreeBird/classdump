//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBasePreBroadcastView_h
#define PTVBasePreBroadcastView_h
@import Foundation;

#include "PTVAudienceSelectorView.h"
#include "PTVBasePreBroadcastViewDelegate-Protocol.h"
#include "PTVExtendedButton.h"
#include "PTVPreBroadcastControlsView.h"
#include "PTVPreBroadcastControlsViewDelegate-Protocol.h"
#include "PTVPreBroadcastHeaderView.h"
#include "PTVPreBroadcastTitleView.h"
#include "PTVStartBroadcastView.h"
#include "PTVTooltip.h"
#include "UITextViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIImageView, UIView;

@interface PTVBasePreBroadcastView : UIView <PTVPreBroadcastControlsViewDelegate, UITextViewDelegate> {
    /* instance variables */
    PTVPreBroadcastTitleView *_titleView;
    PTVBasePreBroadcastView *_weakSelf;
    _Bool _keyboardShown;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardRect;
    UIView *_backgroundShade;
    PTVStartBroadcastView *_startBroadcastView;
    UIImageView *_twitterAvatarView;
    PTVExtendedButton *_twitterLocationButton;
    NSLayoutConstraint *_underTitleViewContainerTopConstraint;
}

@property (readonly, nonatomic) PTVPreBroadcastControlsView *controlsView;
@property (readonly, nonatomic) PTVTooltip *tooltip;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } tooltipSize;
@property (readonly, nonatomic) _Bool isTooltipVisible;
@property (nonatomic) unsigned long long startBroadcastState;
@property (weak, nonatomic) id <PTVBasePreBroadcastViewDelegate> delegate;
@property (readonly, nonatomic) PTVPreBroadcastHeaderView *headerView;
@property (readonly, nonatomic) UIView *underTitleViewContainer;
@property (nonatomic) unsigned long long shareTwitterButtonState;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) PTVAudienceSelectorView *audienceSelectorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)textViewDidChange:(id)change;
- (void)textViewDidChangeSelection:(id)selection;
- (void)updateUnderTitleViewContainerFrame;
- (void)traitCollectionDidChange:(id)change;
- (void)preBroadcastControlsViewDidPressChatTypeButton:(id)button;
- (void)preBroadcastControlsViewDidPressShareOnTwitterButton:(id)button;
- (void)preBroadcastControlsViewDidPressShareOnTwitterButtonWhileDisabled:(id)disabled;
- (void)preBroadcastControlsViewDidPressAcceptGifts:(id)gifts;
- (void)preBroadcastControlsViewDidPressGuestBroadcastingButton:(id)button;
- (void)preBroadcastControlsViewDidPressAudioScopeButton:(id)button;
- (_Bool)preBroadcastControlsView:(id)view didChangeShareLocationTo:(_Bool)to;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame initialTitle:(id)title chatType:(unsigned long long)type hasShareLocationOption:(_Bool)option shareLocationEnabled:(_Bool)enabled cameFromTwitter:(_Bool)twitter twitterUsername:(id)username hasShareOnTwitterOption:(_Bool)option shareOnTwitterEnabled:(_Bool)enabled hasPrivateBroadcastOption:(_Bool)option isExternalEncoderBroadcast:(_Bool)broadcast;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; })calculateLayout;
- (void)setupBackgroundShade;
- (void)setupHeaderView;
- (void)setupBroadcastTitleViews:(id)views;
- (unsigned long long)remainingCharacterLimitForTitle;
- (void)setupPreBroadcastControlsWithChatType:(unsigned long long)type hasShareLocationOption:(_Bool)option shareLocationEnabled:(_Bool)enabled hasShareOnTwitterOption:(_Bool)option shareOnTwitterEnabled:(_Bool)enabled cameFromTwitter:(_Bool)twitter twitterUsername:(id)username isExternalEncoderBroadcast:(_Bool)broadcast;
- (void)setControlsViewHidden:(_Bool)hidden animated:(_Bool)animated;
- (_Bool)isSharingLocation;
- (void)setSharingLocation:(_Bool)location;
- (void)setAudienceReference:(id)reference;
- (void)setChatType:(unsigned long long)type;
- (void)showCameFromTwitterTooltip;
- (void)setHasShareOnTwitterButton:(_Bool)button animatedWithLayout:(_Bool)layout;
- (void)setShareTwitterButtonState:(unsigned long long)state displayTooltipIfNeeded:(_Bool)needed;
- (void)showLocationAndTwitterTooltips;
- (void)showTwitterTooltips;
- (void)showGuestBroadcastingTooltip;
- (void)hideAllTooltipsAnimated:(_Bool)animated;
- (void)setIsAcceptGiftsSupported:(_Bool)supported;
- (void)setAcceptGiftsSelected:(_Bool)selected;
- (void)setIsGuestBroadcastingSupported:(_Bool)supported;
- (void)setIsGuestBroadcastingSelected:(_Bool)selected;
- (void)setIsAudioScopeSupported:(_Bool)supported;
- (void)setIsAudioScopeSelected:(_Bool)selected;
- (void)setupConnectionStatusView;
- (void)startBroadcastingButtonPressed;
- (void)updateStartBroadcastViewState;
- (void)setExternalSourceImages:(id)images;
- (void)setupAudienceSelectorViewWithPublicAudienceType:(long long)type privateBroadcastsAllowed:(_Bool)allowed;
- (void)didTapAudienceSelector;
- (void)setAudienceSelectorEnabled:(_Bool)enabled;
- (void)setTwitterAvatarImage:(id)image;
- (void)setPlaceholderText:(id)text;
- (void)hideControlsForTwitterIntegration;
- (void)setTwitterLocationTitle:(id)title pinImage:(id)image;
- (void)setTwitterLocationTitle:(id)title pinImage:(id)image target:(id)target action:(SEL)action;
- (void)setTwitterPrependedText:(id)text remainingCharacterLimit:(unsigned long long)limit;
- (void)keyboardWillShowWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame curve:(long long)curve duration:(float)duration;
- (void)keyboardWillHideWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame curve:(long long)curve duration:(float)duration;
- (void)setKeyboardTitleAccessoryView:(id)view;
- (void)showKeyboardTitleAccessoryTooltipWithText:(id)text;
- (void)hideKeyboardTitleAccessoryTooltip;
- (void)setTooltipVisible:(_Bool)visible;
- (void)layoutTooltip;
- (void)fadeContentOut;
- (void)fadeContentInAnimated;
- (void)fadeContentIn;

@end

#endif /* PTVBasePreBroadcastView_h */
