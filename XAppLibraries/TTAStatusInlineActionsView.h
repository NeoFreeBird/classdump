//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTAStatusInlineActionsView_h
#define TTAStatusInlineActionsView_h
@import Foundation;

#include "TFNTwitterAccount.h"
#include "TTACoreStatusLiveEngagementManager.h"
#include "TTACoreStatusViewInlineActions-Protocol.h"
#include "TTACoreStatusViewModel-Protocol.h"
#include "TTAFeedbackInlineTip.h"
#include "TTAStatusInlineActionButtonDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView;
@protocol TTAStatusInlineActionsViewDelegate;

@interface TTAStatusInlineActionsView : UIView <TTACoreStatusViewInlineActions, TTAStatusInlineActionButtonDelegate> {
    /* instance variables */
    _Bool _compactFitEnabled;
}

@property (retain, nonatomic) TTAFeedbackInlineTip *feedbackInlineTip;
@property (readonly, nonatomic) NSMutableArray *inlineActionButtons;
@property (readonly, nonatomic) id <TTACoreStatusViewModel> viewModel;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (weak, nonatomic) id <TTAStatusInlineActionsViewDelegate> delegate;
@property (weak, nonatomic) TTACoreStatusLiveEngagementManager *livePipelineTweetManager;
@property (readonly, nonatomic) long long displayType;
@property (readonly, nonatomic) unsigned long long displayTextOptions;
@property (nonatomic) _Bool reusesButtonWidthsWithinLayoutPass;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForViewModel:(id)model options:(unsigned long long)options displayType:(long long)type account:(id)account maximumWidth:(double)width fullBleedWidth:(double)width;
+ (id)_t1_overrideButtonSizeForDisplayType:(long long)type options:(unsigned long long)options;
+ (double)_t1_heightForViewModel:(id)model options:(unsigned long long)options displayType:(long long)type account:(id)account maximumWidth:(double)width fullBleedWidth:(double)width;
+ (double)_t1_inlineActionsHeightForViewModel:(id)model options:(unsigned long long)options displayType:(long long)type account:(id)account maximumWidth:(double)width;
+ (id)_t1_inlineActionViewClassesForViewModel:(id)model options:(unsigned long long)options displayType:(long long)type account:(id)account;
+ (_Bool)_t1_shouldShowReplyButtonForDisplayType:(long long)type;
+ (_Bool)_t1_shouldShowAnalyticsButtonForViewModel:(id)model options:(unsigned long long)options account:(id)account displayType:(long long)type;
+ (_Bool)_t1_shouldShowBookmarkButtonForViewModel:(id)model options:(unsigned long long)options anatomyFeatures:(id)features displayType:(long long)type;
+ (_Bool)t1_shouldShowDownvoteButtonForViewModel:(id)model options:(unsigned long long)options anatomyFeatures:(id)features displayType:(long long)type account:(id)account;
+ (_Bool)shouldDisplayFeedbackTipForViewModel:(id)model options:(unsigned long long)options displayType:(long long)type account:(id)account;
+ (_Bool)_t1_shouldDisplayInlineFeedbackHintForViewModel:(id)model displayType:(long long)type options:(unsigned long long)options account:(id)account;
+ (id)updateParameters:(id)parameters forInlineActionWithScribeItem:(id)item;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setViewModel:(id)model options:(unsigned long long)options displayType:(long long)type displayTextOptions:(unsigned long long)options account:(id)account;
- (void)statusDidUpdate:(_Bool)update;
- (void)updateViewModel:(id)model animated:(_Bool)animated;
- (id)viewForInlineActionWithType:(unsigned long long)type;
- (long long)isButtonEnabledForDisabledEngagementEducationForType:(unsigned long long)type;
- (void)enumerateInlineActionsUsingBlock:(id /* block */)block;
- (void)layoutSubviews;
- (void)_t1_addInlineActionViewsReusingCachedViews:(_Bool)views;
- (void)_t1_updateContent:(_Bool)content updatingAXElements:(_Bool)axelements;
- (void)_t1_adjustInlineActionButtonTouchInsets;
- (void)_t1_layoutInlineActionButtons;
- (_Bool)_t1_isNarrowButton:(id)button;
- (void)_t1_layoutInlineActionButtonsAtOrigin:(struct CGPoint { double x0; double x1; })origin forContentWidth:(double)width contentHeight:(double)height buttonWidthCalculator:(id /* block */)calculator buttonAlignmentCalculator:(id /* block */)calculator minimumSpacing:(double)spacing maximumSpacing:(double)spacing shouldAddRightSidePadding:(_Bool)padding;
- (id)_t1_visibleInlineActionButtonsForMaximumWidth:(double)width buttonWidthCalculator:(id /* block */)calculator minimumSpacing:(double)spacing;
- (void)_t1_layoutInlineActionButtonsTweetDetails;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)calculatedLayoutMetrics;
- (void)didTapInlineActionButton:(id)button;
- (void)didTapInlineActionButton:(id)button withPrompt:(id)prompt menuItem:(long long)item;
- (void)didTapSecondaryInlineActionButton:(id)button;
- (void)inlineActionButtonDidRecognizeLongPressBegan:(id)began;
- (_Bool)isAlternateActionEnabledForInlineActionButton:(id)button;
- (void)didTriggerAlternateActionInInlineActionButton:(id)button;
- (void)didStartBrandedAnimationFromInlineActionButton:(id)button;

@end

#endif /* TTAStatusInlineActionsView_h */
