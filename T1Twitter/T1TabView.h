//
#ifndef T1TabView_h
#define T1TabView_h
@import Foundation;

#include "T1TabView-Protocol.h"
#include "TFNCustomBarButtonItemView-Protocol.h"

@class NSString, TFNBadgeView, TFNUnboundedContainerView, TPXSpringSolver, UIColor, UIImageView, UIView;

@interface T1TabView : UIView <T1TabView, TFNCustomBarButtonItemView>

@property (readonly, nonatomic) UIImageView *unreadIndicatorImageView;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) TFNUnboundedContainerView *transformContainer;
@property (readonly, nonatomic) TFNBadgeView *badgeView;
@property (nonatomic) unsigned long long badgeCount;
@property (nonatomic) _Bool badgeWasNumbered;
@property (nonatomic) long long badgeViewIsTransitioningStackCount;
@property (readonly, nonatomic) long long badgeViewState;
@property (nonatomic) double lastAnimationTimestamp;
@property (readonly, nonatomic) TPXSpringSolver *scaleSpringSolver;
@property (retain, nonatomic) UIColor *iconColor;
@property (readonly, nonatomic) long long displaySize;
@property (readonly, nonatomic) long long panelID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) UIView *customView;
@property (nonatomic) _Bool selected;
@property (nonatomic) _Bool highlighted;
@property (readonly, nonatomic) _Bool hasUnreadContent;
@property (copy, nonatomic) NSString *scribePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)itemColor;
+ (id)pixelAlignTabItemsFeatureSwitch;
+ (void)setPixelAlignTabItemsBlock:(id /* block */)block;
+ (_Bool)pixelAlignTabItems;

/* instance methods */
- (void)t1_setAccessibilityLabel:(id)label;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame title:(id)title imageView:(id)view panelID:(long long)id displaySize:(long long)size;
- (_Bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame title:(id)title imageView:(id)view panelID:(long long)id;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame title:(id)title imageName:(id)name panelID:(long long)id;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame title:(id)title imageName:(id)name panelID:(long long)id displaySize:(long long)size;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame title:(id)title panelID:(long long)id;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame title:(id)title panelID:(long long)id displaySize:(long long)size;
- (id)_t1_keyframeAnimationForSpring:(id)spring;
- (void)tfn_triggerTouchDownAnimation;
- (void)tfn_triggerTouchUpAnimation;
- (void)_t1_updateImageViewAnimated:(_Bool)animated;
- (void)applyTintColor:(id)color;
- (double)_t1_imageHeight;
- (void)setHasUnreadContent:(_Bool)content animated:(_Bool)animated;
- (void)setBadgeCount:(unsigned long long)count animated:(_Bool)animated;
- (id)_t1_badgeScaleTransformKeyframeWithSpring;
- (void)_t1_transitionBadgeCountToVisible:(_Bool)visible;
- (void)_t1_transitionBadgeCountToHidden:(_Bool)hidden;
- (void)_t1_crossfadeBadgeCount:(_Bool)count;
- (void)_t1_updateBadgeViewContent;
- (void)_t1_sizeBadgeViewToContent;
- (void)_t1_layoutBadgeViewMinimized;
- (void)_t1_layoutBadgeViewMaximized;
- (void)_t1_pushBadgeViewIsTransitioning;
- (void)_t1_popBadgeViewIsTransitioning;
- (void)layoutSubviews;
- (void)_t1_layoutForTabBar;
- (void)_t1_layoutBadge;
- (void)_t1_layoutUnreadIndicator;
- (void)_t1_pulseBadge;
- (void)setBackgroundColor:(id)color;
- (_Bool)tfn_isAppGestureEnabled:(unsigned long long)enabled;
- (_Bool)isSelected;
- (_Bool)isHighlighted;

@end

#endif /* T1TabView_h */
