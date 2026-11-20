//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTAStatusInlineActionButton_h
#define TTAStatusInlineActionButton_h
@import Foundation;

#include "TFNTwitterAccount.h"
#include "TTACoreStatusLiveEngagementManager.h"
#include "TTACoreStatusViewModel-Protocol.h"
#include "TTAStatusInlineActionButtonAnimator-Protocol.h"
#include "TTAStatusInlineActionButtonDelegate-Protocol.h"
#include "TTAStatusInlineAnimatableButton-Protocol.h"

@class NSString, TFNAnimatableButton, TFNButton, TFNLegacyButtonAnimator, UIImageView, UILabel, UIView;

@interface TTAStatusInlineActionButton : UIView <TTAStatusInlineAnimatableButton> {
    /* instance variables */
    id _dynamicColorsDidReloadObserver;
    id _reduceMotionStatusDidChangeObserver;
}

@property (readonly, nonatomic) unsigned long long buttonSize;
@property (readonly, nonatomic) TFNLegacyButtonAnimator *animator;
@property (readonly, nonatomic) _Bool buttonNeedsVisualUpdate;
@property (retain, nonatomic) UIView *secondaryButtonDivider;
@property (readonly, nonatomic) TFNAnimatableButton *button;
@property (retain, nonatomic) TFNButton *secondaryButton;
@property (readonly, nonatomic) NSString *secondaryImageName;
@property (nonatomic) unsigned long long alternateInlineActionType;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long displayTextOptions;
@property (retain, nonatomic) NSString *customAXActionForAlternativeActionName;
@property (readonly, nonatomic) _Bool displayOverDarkBackground;
@property (nonatomic) _Bool shouldAppearDisabled;
@property (weak, nonatomic) id <TTAStatusInlineActionButtonDelegate> delegate;
@property (retain, nonatomic) id <TTAStatusInlineActionButtonAnimator> buttonAnimator;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic) long long style;
@property (readonly, nonatomic) unsigned long long inlineActionType;
@property (readonly, nonatomic) NSString *actionSheetTitle;
@property (readonly, nonatomic) _Bool shouldShowZeroCountText;
@property (readonly, nonatomic) NSString *zeroCountText;
@property (readonly, nonatomic) long long showDisabledEducationForReason;
@property (readonly, nonatomic) id <TTACoreStatusViewModel> viewModel;
@property (readonly, nonatomic) _Bool enabled;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } touchInsets;
@property (readonly, nonatomic) double extraWidth;
@property (readonly, nonatomic) _Bool displayPillStyle;
@property (readonly, nonatomic) _Bool showCount;
@property (readonly, nonatomic) double leadingEdgeInset;
@property (readonly, nonatomic) double trailingEdgeInset;
@property (readonly, nonatomic) double horizontalLayoutOffset;
@property (readonly, nonatomic) unsigned long long visibility;
@property (readonly, nonatomic) unsigned long long touchInsetPriority;
@property (nonatomic) long long count;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) TTACoreStatusLiveEngagementManager *livePipelineTweetManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGSize { double x0; double x1; })buttonImageSizeUsingViewModel:(id)model options:(unsigned long long)options overrideButtonSize:(id)size account:(id)account;
+ (void)_t1_enumerateCommonControlStatesUsingBlock:(id /* block */)block;
+ (unsigned long long)_t1_buttonSizeWithOverride:(id)override;
+ (unsigned long long)quoteButtonSize;
+ (double)_t1_minimumHeightAndWidthForButtonSize:(unsigned long long)size;
+ (double)_t1_imageHeightForButtonSize:(unsigned long long)size;
+ (id)_t1_fontForButtonSize:(unsigned long long)size;
+ (_Bool)_t1_displayOverDarkBackgroundWithViewModel:(id)model options:(unsigned long long)options account:(id)account;
+ (id)buttonImageNameForUIControlState:(unsigned long long)state viewModel:(id)model options:(unsigned long long)options account:(id)account;
+ (_Bool)disablesDisplayOverDarkBackgroundVariantWithViewModel:(id)model account:(id)account;
+ (double)pilledButtonVerticalPadding;
+ (id)fontForButtonSize:(unsigned long long)size;
+ (_Bool)skipsRepeatedWork;
+ (void)setSkipsRepeatedWork:(_Bool)work;
+ (void)performActionBarPass:(id /* block */)pass;

/* instance methods */
- (id)init;
- (id)initWithOptions:(unsigned long long)options overrideSize:(id)size account:(id)account;
- (id)initWithInlineActionType:(unsigned long long)type options:(unsigned long long)options overrideSize:(id)size account:(id)account;
- (id)initWithInlineActionType:(unsigned long long)type options:(unsigned long long)options overrideSize:(id)size account:(id)account style:(long long)style secondaryImageName:(id)name;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)didTap;
- (void)secondaryButtonTapped;
- (void)didTriggerAlternateAction;
- (void)performNonInteractiveAnimation;
- (void)didLongPressActionButton:(id)button;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)_t1_cachedImageNamed:(id)named fitSize:(struct CGSize { double x0; double x1; })size fillColor:(id)color;
- (id)_t1_imageNamed:(id)named fitSize:(struct CGSize { double x0; double x1; })size fillColor:(id)color;
- (void)_t1_updateImagesUpdateMainButton:(_Bool)button updateSecondaryButton:(_Bool)button;
- (void)_t1_updateInsets;
- (struct CGSize { double x0; double x1; })secondaryButtonSize;
- (double)secondaryButtonAdditionalSpacing;
- (void)_t1_updateTintColor;
- (void)_t1_dynamicColorsDidReload:(id)reload;
- (void)_t1_updateAnimator;
- (void)_t1_updateCountText;
- (void)_t1_setInitialTouchInsets;
- (void)_t1_setInitialButtonAppearance;
- (void)_t1_updateTintedViews;
- (void)_t1_updateCornerRadius;
- (void)_t1_updateBackgroundColor;
- (void)_t1_updateBorderColor;
- (void)_t1_updateSecondaryButton;
- (void)setSecondaryImageName:(id)name animated:(_Bool)animated;
- (void)setButtonNeedsVisualUpdate;
- (id)animationTypeForTransitionToSelectedState;
- (void)statusDidUpdate:(id)update options:(unsigned long long)options displayTextOptions:(unsigned long long)options animated:(_Bool)animated featureSwitches:(id)switches;
- (id)buttonHoverColor;
- (id)titleColorForUIControlState:(unsigned long long)state;
- (id)tintColorForUIControlState:(unsigned long long)state;
- (id)selectableInteractiveTintColorForUIControlState:(unsigned long long)state actionTintColor:(id)color;
- (_Bool)shouldApplyTintColorToImageForUIControlState:(unsigned long long)state;
- (id)buttonImageNameForUIControlState:(unsigned long long)state buttonSize:(unsigned long long)size;
- (double)extraWidthWithStyle;
- (_Bool)shouldShowCount;
- (id)createImageView;

@end

#endif /* TTAStatusInlineActionButton_h */
