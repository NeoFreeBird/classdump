//
#ifndef TFNExpandingButton_h
#define TFNExpandingButton_h
@import Foundation;

#include "TFNExpandingButtonItemLayoutManager.h"
#include "TFNExpandingButtonItemView.h"
#include "TFNOverlayView.h"
#include "TFNTouchDownGestureRecognizer.h"
#include "TFNUnboundedContainerView.h"
#include "TPXSpringAnimation2DObserver-Protocol.h"
#include "TPXSpringAnimator.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UIColor, UIImageView, UIImpactFeedbackGenerator, UILabel, UITapGestureRecognizer, UIView;

@interface TFNExpandingButton : TFNUnboundedContainerView <TPXSpringAnimation2DObserver, UIGestureRecognizerDelegate>

@property (nonatomic) long long state;
@property (retain, nonatomic) TFNUnboundedContainerView *buttonContainer;
@property (retain, nonatomic) TFNExpandingButtonItemView *mainItemView;
@property (retain, nonatomic) UIView *cancelBackgroundView;
@property (retain, nonatomic) UIImageView *cancelImageView;
@property (retain, nonatomic) TFNOverlayView *overlayView;
@property (retain, nonatomic) UILabel *tutorialTitleLabel;
@property (retain, nonatomic) UILabel *tutorialDescriptionLabel;
@property (retain, nonatomic) UILabel *tutorialButtonLabel;
@property (retain, nonatomic) TFNUnboundedContainerView *subItemsContainerView;
@property (retain, nonatomic) NSArray *subItemViews;
@property (nonatomic) unsigned long long indexOfFocusedItem;
@property (retain, nonatomic) TPXSpringAnimator *expansionAnimator;
@property (retain, nonatomic) UIImpactFeedbackGenerator *lightHapticGenerator;
@property (retain, nonatomic) UIImpactFeedbackGenerator *mediumHapticGenerator;
@property (retain, nonatomic) TFNTouchDownGestureRecognizer *touchDownScalingRecognizer;
@property (retain, nonatomic) TFNTouchDownGestureRecognizer *overlayViewTouchDownRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *overlayViewTapGestureRecognizer;
@property (copy, nonatomic) id /* block */ expandCompletionHandler;
@property (copy, nonatomic) id /* block */ collapseCompletionHandler;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *iconColor;
@property (retain, nonatomic) UIColor *outlineColor;
@property (retain, nonatomic) UIColor *overlayColor;
@property (retain, nonatomic) UIColor *cancelIconColor;
@property (retain, nonatomic) UIColor *cancelBackgroundColor;
@property (nonatomic) double primaryItemIconHeight;
@property (nonatomic) double subItemIconHeight;
@property (nonatomic) double subItemSize;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } touchInsets;
@property (retain, nonatomic) TFNExpandingButtonItemLayoutManager *subItemViewLayoutManager;
@property (nonatomic) _Bool rtlExpandedItemsPositionFlipped;
@property (nonatomic) _Bool showsDropShadow;
@property (copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) _Bool isCollapsed;
@property (readonly, nonatomic) _Bool isExpanded;
@property (nonatomic) _Bool highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setItems:(id)items animated:(_Bool)animated;
- (id)_tfn_defaultBackgroundColors;
- (void)expandAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)collapseAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)focusSubItemWithProximityToLocation:(struct CGPoint { double x0; double x1; })location;
- (unsigned long long)indexOfItemAtLocation:(struct CGPoint { double x0; double x1; })location;
- (void)selectItemAtIndex:(unsigned long long)index;
- (void)showTutorialForItemWithCategory:(unsigned long long)category completion:(id /* block */)completion;
- (void)_tfn_layoutTutorialForItem:(id)item;
- (void)_tfn_animateTutorialWithDelay:(double)delay animations:(id /* block */)animations completion:(id /* block */)completion;
- (void)_tfn_hideTutorial;
- (id)_tfn_shadowedSubviews;
- (double)_tfn_normalizedProgressAtLocation:(struct CGPoint { double x0; double x1; })location towardItemViewAtIndex:(unsigned long long)index;
- (unsigned long long)_tfn_indexOfItemViewAtLocation:(struct CGPoint { double x0; double x1; })location;
- (void)_tfn_updateItemViews;
- (void)_tfn_updateItemViewColors;
- (void)_tfn_startExpansionAnimatonToProgress:(double)progress;
- (void)_tfn_willStartExpansionToProgress:(double)progress;
- (void)_tfn_didEndExpansionToProgress:(double)progress;
- (void)_tfn_updateExpansionLayoutWithProgress:(double)progress;
- (void)_tfn_updateExpansionAlphaWithProgress:(double)progress;
- (void)_tfn_animateScale:(double)scale;
- (void)_tfn_setScale:(double)scale;
- (_Bool)_tfn_isDeadZoneLocation:(struct CGPoint { double x0; double x1; })location;
- (void)_tfn_highlightSubItemAtIndex:(unsigned long long)index;
- (void)_tfn_touchDownScaleAction:(id)action;
- (void)_tfn_overlayViewTouchDownAction:(id)action;
- (void)_tfn_runExpandCompletionHandler;
- (void)_tfn_runCollapseCompletionHandler;
- (void)_tfn_didTapCancel;
- (void)tpx_animationDidUpdate:(id)update;
- (void)tpx_animationDidStop:(id)stop;
- (void)prepareHapticFeedback:(unsigned long long)feedback;
- (void)performHapticFeedback:(unsigned long long)feedback;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (_Bool)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (void)_tfn_voiceOverDidFinishAnnouncement:(id)announcement;
- (_Bool)isRtlExpandedItemsPositionFlipped;
- (_Bool)isHighlighted;

@end

#endif /* TFNExpandingButton_h */
