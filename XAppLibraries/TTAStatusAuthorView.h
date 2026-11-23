//
#ifndef TTAStatusAuthorView_h
#define TTAStatusAuthorView_h
@import Foundation;

#include "T1InfoTextView.h"
#include "TFNPreviewSuppressing-Protocol.h"
#include "TFNPreviewable-Protocol.h"
#include "TFNTwitterAccount.h"
#include "TTAAffiliateBadgeView.h"
#include "TTACoreStatusViewModel-Protocol.h"
#include "TUIFollowControl.h"
#include "TUIUserDesignatorView.h"

@class NSArray, NSMutableDictionary, NSString, TFNBadgesImageView, TFNButton, TFNCustomScreenshotContainerView, TFNDismissButton, TFNIndicatorLabel, TFNLayoutableView, TFNTappableHighlightView, UILabel, UIView;
@protocol TTACoreDebugSettings, TTAStatusAuthorViewDelegate;

@interface TTAStatusAuthorView : TFNLayoutableView <TFNPreviewable, TFNPreviewSuppressing> {
    /* instance variables */
    id _previewingTarget;
    SEL _previewingAction;
    id _longPressTarget;
    SEL _longPressAction;
}

@property (readonly, nonatomic) UILabel *fullNameLabel;
@property (readonly, nonatomic) UILabel *usernameLabel;
@property (retain, nonatomic) TFNBadgesImageView *authorBadgeView;
@property (retain, nonatomic) TFNIndicatorLabel *communityModeratorBadgeView;
@property (readonly, nonatomic) UILabel *infoTextViewSeparatorLabel;
@property (nonatomic) _Bool infoTextHidden;
@property (readonly, nonatomic) UILabel *timeLabel;
@property (readonly, nonatomic) UILabel *timeSeparatorLabel;
@property (readonly, nonatomic) UILabel *followControlSeparatorLabel;
@property (nonatomic) _Bool followControlHidden;
@property (nonatomic) _Bool followControlSeparatorLabelHidden;
@property (retain, nonatomic) TFNDismissButton *caretButton;
@property (nonatomic) _Bool caretButtonArmsMenu;
@property (retain, nonatomic) TFNDismissButton *notInterestedButton;
@property (retain, nonatomic) UILabel *viewCountTextView;
@property (retain, nonatomic) UIView *viewCountBackgroundView;
@property (retain, nonatomic) TFNButton *subscribeButton;
@property (retain, nonatomic) TFNCustomScreenshotContainerView *placeholderButtonCustomScreenshotContainer;
@property (retain, nonatomic) NSMutableDictionary *screenShotContainers;
@property (readonly, nonatomic) TFNButton *analyticsButton;
@property (readonly, nonatomic) TFNButton *messageButton;
@property (retain, nonatomic) TTAAffiliateBadgeView *designatorBadge;
@property (retain, nonatomic) TUIUserDesignatorView *parodyBadge;
@property (copy, nonatomic) NSArray *accessibleViews;
@property (nonatomic) long long displayType;
@property (retain, nonatomic) UILabel *adLabel;
@property (nonatomic) _Bool adLabelEligible;
@property (readonly, nonatomic) id <TTACoreStatusViewModel> viewModel;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (weak, nonatomic) id <TTAStatusAuthorViewDelegate> delegate;
@property (retain, nonatomic) TFNDismissButton *grokAnalyzeButton;
@property (retain, nonatomic) TFNTappableHighlightView *highlightView;
@property (readonly, nonatomic) TUIFollowControl *followControl;
@property (nonatomic) _Bool followControlHugsAuthor;
@property (nonatomic) _Bool hidesFullName;
@property (readonly, nonatomic) double contentMaxX;
@property (readonly, nonatomic) TFNButton *promoteButton;
@property (nonatomic) struct CGSize { double x0; double x1; } scribableTweetClickAuthorViewSize;
@property (readonly, nonatomic) id /* block */ cardAttachmentDecider;
@property (readonly, nonatomic) id <TTACoreDebugSettings> debugSettings;
@property (retain, nonatomic) T1InfoTextView *infoTextView;
@property (nonatomic) _Bool suppressesPreviewing;
@property (nonatomic) _Bool hidesAdLabel;
@property (nonatomic) _Bool screenshotContainerSurvivesReuse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)authorBadgePadding;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame cardAttachmentDecider:(id /* block */)decider debugSettings:(id)settings;
- (void)setViewModel:(id)model options:(unsigned long long)options displayType:(long long)type account:(id)account;
- (void)statusDidUpdate;
- (void)userDidUpdate;
- (void)_updateContent;
- (void)updateTimestamp;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)_cleanupLabelGestures;
- (void)_updateLabelGesturesWithNameProfileNavigationEnabled:(_Bool)enabled;
- (void)setPreviewingTarget:(id)target action:(SEL)action;
- (void)setLongPressTarget:(id)target action:(SEL)action;
- (_Bool)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)accessibilityElements;
- (id)accessibilityElementAtIndex:(long long)index;
- (long long)indexOfAccessibilityElement:(id)element;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (_Bool)suppressesPreviewingAtLocation:(struct CGPoint { double x0; double x1; })location;
- (void)_t1_screenshots_modified_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame view:(id)view;
- (void)_t1_screenshots_modified_setHidden:(_Bool)hidden view:(id)view;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_t1_screenshots_modified_getFrameWithView:(id)view;
- (void)_t1_screenshots_modified_addFrontView:(id)view putIntoContainer:(_Bool)container showWatermark:(_Bool)watermark;
- (_Bool)isDisplayTypeForLargeTweets;
- (void)_addHighlightView;
- (void)_updateHighlightView;
- (void)_updateAccessibleViews;
- (id)fullNameColor;
- (id)usernameColor;
- (_Bool)_t1_drawsTrailingGlyphsOnMedia;
- (id)_t1_trailingGlyphColor;
- (void)applyLabel:(id)label withText:(id)text font:(id)font color:(id)color;
- (_Bool)_caretButtonArmingIsStaleWhenTrayEnabled:(_Bool)enabled;
- (void)_didTapCaret;
- (void)didTapGrokAnalyze;
- (id)_grokAnalyzeContextMenu;
- (void)_didTapSubscribe;
- (void)_didTapPromote;
- (void)_didTapAnalytics;
- (void)_didTapMessage;
- (id)_promoteButtonScribeElement;
- (id)_analyticsButtonScribeElement;
- (void)_didTapDesignatorBadge;
- (void)_t1_didTapAuthorView;
- (void)_t1_didLongPressAuthorView:(id)view;
- (void)_t1_didTapAuthorHighlightView;

@end

#endif /* TTAStatusAuthorView_h */
