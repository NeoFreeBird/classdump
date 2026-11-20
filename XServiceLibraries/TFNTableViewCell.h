//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTableViewCell_h
#define TFNTableViewCell_h
@import Foundation;

#include "TFNDataViewCell-Protocol.h"
#include "TFNDataViewCellAppearanceHelper.h"
#include "TFNDataViewCellHelper.h"
#include "TFNDataViewCellLayout.h"
#include "TFNReusableViewCache.h"
#include "TFNSwipeActionGestureController.h"

@class NSIndexPath, NSString, UIColor, UIImageView, UITableViewCell, UIView;

@interface TFNTableViewCell : UITableViewCell <TFNDataViewCell> {
    /* instance variables */
    _Bool _initialized;
    TFNDataViewCellHelper *_helper;
    TFNDataViewCellAppearanceHelper *_appearanceHelper;
    long long _editingAccessoryType;
    UIView *_accessoryView;
    UIView *_editingAccessoryView;
    UIImageView *_accessoryImageView;
    _Bool _highlighted;
    TFNSwipeActionGestureController *_swipeActionController;
    UIView *_topCornerClipper;
    UIView *_bottomCornerClipper;
    UIView *_backgroundView;
}

@property (nonatomic) long long borderType;
@property (retain, nonatomic) UIColor *separatorAndBorderColor;
@property (nonatomic) double separatorHeight;
@property (nonatomic) long long separatorType;
@property (nonatomic) long long tfn_accessoryType;
@property (nonatomic) long long accessoryVerticalAlignment;
@property (nonatomic) long long appearance;
@property (retain, nonatomic) UIColor *groupedAppearanceBorderColor;
@property (nonatomic) _Bool groupedAppearanceMaskEnabled;
@property (nonatomic) _Bool deselectsButtonsOnCellSelection;
@property (readonly, nonatomic) _Bool enablePostSwipeGestures;
@property (nonatomic) _Bool useAlternateBackgroundColor;
@property (nonatomic) _Bool hostProvidesBackground;
@property (retain, nonatomic) TFNDataViewCellLayout *cellLayout;
@property (nonatomic) unsigned long long sectionBreaks;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ willDisplayInDataViewControllerBlock;
@property (copy, nonatomic) id /* block */ didDisplayInDataViewControllerBlock;
@property (copy, nonatomic) id /* block */ didDisplayWithZeroVisibilityInDataViewControllerBlock;
@property (copy, nonatomic) id /* block */ didEndDisplayingInDataViewControllerBlock;
@property (copy, nonatomic) id /* block */ didEndScrollingInDataViewControllerBlock;
@property (copy, nonatomic) id /* block */ didFirstDisplayInDataViewControllerBlock;
@property (copy, nonatomic) id /* block */ cleanupBlock;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic) _Bool keyboardHighlighted;
@property (readonly, nonatomic) _Bool keyboardSelectable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TFNReusableViewCache *reusableViewCache;
@property (readonly, nonatomic) _Bool isPreparedToDisplayMenuOnPrimaryAction;
@property (readonly, copy, nonatomic) id /* block */ willDisplayMenuOnPrimaryActionBlock;
@property (copy, nonatomic) id /* block */ willDisplayMenuBlock;
@property (copy, nonatomic) id /* block */ willDismissMenuBlock;

/* class methods */
+ (id)cellForTableView:(id)view indexPath:(id)path;
+ (id)cellForTableView:(id)view reuseIdentifier:(id)identifier indexPath:(id)path;
+ (id)cellForTableView:(id)view reuseIdentifier:(id)identifier indexPath:(id)path initialization:(id /* block */)initialization;
+ (id)cellForTableView:(id)view style:(long long)style reuseIdentifier:(id)identifier indexPath:(id)path initialization:(id /* block */)initialization;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })totalContentEdgeInsetsForAccessoryType:(long long)type layoutMetrics:(id)metrics;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })totalContentEdgeInsetsForAccessoryWidth:(double)width layoutMetrics:(id)metrics;
+ (id)layoutMetrics:(id)metrics forExpandedSeparatorHeight:(double)height atIndexPath:(id)path;

/* instance methods */
- (_Bool)initializeForTableView:(id)view indexPath:(id)path initialization:(id /* block */)initialization;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)dealloc;
- (_Bool)canBecomeFocused;
- (long long)accessoryType;
- (void)setAccessoryType:(long long)type;
- (long long)editingAccessoryType;
- (void)setEditingAccessoryType:(long long)type;
- (id)accessoryView;
- (void)setAccessoryView:(id)view;
- (id)editingAccessoryView;
- (void)setEditingAccessoryView:(id)view;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size withHorizontalFittingPriority:(float)priority verticalFittingPriority:(float)priority;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)highlighted animated:(_Bool)animated;
- (void)setSelected:(_Bool)selected animated:(_Bool)animated;
- (void)layoutAccessory;
- (void)willDisplayInDataViewController:(id)controller atIndexPath:(id)path;
- (void)didFirstDisplayInDataViewController:(id)controller;
- (void)didDisplayInDataViewController:(id)controller atIndexPath:(id)path visibleIntersection:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })intersection;
- (void)didDisplayWithZeroVisibilityInDataViewController:(id)controller atIndexPath:(id)path;
- (void)didEndDisplayingInDataViewController:(id)controller reason:(unsigned long long)reason;
- (void)didEndScrollingInDataViewController:(id)controller;
- (void)cleanup;
- (_Bool)isKeyboardSelectable;
- (void)didKeyboardSelectInDataViewController:(id)controller atIndexPath:(id)path;
- (id)innerContentViewForSwipe;
- (id)onSwipeRight;
- (id)onSwipeLeft;
- (void)onSwipeLeftAndHold;
- (_Bool)swipeActionAnimationsSupported;
- (void)setSwipeRevealBackgroundVisible:(_Bool)visible;
- (void)accountUserDefaultsDidUpdate:(id)update;
- (id)calculatedLayoutMetrics;
- (id)keyCommands;
- (void)prepareToDisplayMenuOnPrimaryAction;
- (void)populateMenuWithTitle:(id)title actionItems:(id)items;
- (void)populateMenuWithActionItems:(id)items;
- (_Bool)tableViewCellAccessibilityMagicTap;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (_Bool)isKeyboardHighlighted;

@end

#endif /* TFNTableViewCell_h */
