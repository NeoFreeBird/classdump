//
#ifndef TFNCollectionViewListCell_h
#define TFNCollectionViewListCell_h
@import Foundation;

#include "TFNDataViewCell-Protocol.h"
#include "TFNDataViewCellAppearanceHelper.h"
#include "TFNDataViewCellHelper.h"
#include "TFNDataViewCellLayout.h"
#include "TFNMenuSupport-Protocol.h"
#include "TFNReusableViewCache.h"

@class NSIndexPath, NSString, UICollectionViewListCell, UIColor, UIView;

@interface TFNCollectionViewListCell : UICollectionViewListCell <TFNDataViewCell, TFNMenuSupport> {
    /* instance variables */
    _Bool _initialized;
    TFNDataViewCellHelper *_helper;
    TFNDataViewCellAppearanceHelper *_appearanceHelper;
    _Bool _editing;
    _Bool _highlighted;
}

@property (retain, nonatomic) UIColor *separatorAndBorderColor;
@property (nonatomic) double separatorHeight;
@property (nonatomic) long long separatorType;
@property (nonatomic) long long borderType;
@property (nonatomic) long long appearance;
@property (retain, nonatomic) UIColor *groupedAppearanceBorderColor;
@property (nonatomic) _Bool groupedAppearanceMaskEnabled;
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
+ (id)cellForCollectionView:(id)view reuseIdentifier:(id)identifier indexPath:(id)path initialization:(id /* block */)initialization;

/* instance methods */
- (_Bool)initializeForCollectionView:(id)view indexPath:(id)path initialization:(id /* block */)initialization;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)highlighted;
- (void)updateConfigurationUsingState:(id)state;
- (void)setAccessories:(id)accessories;
- (void)didUpdateAccessories;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size withHorizontalFittingPriority:(float)priority verticalFittingPriority:(float)priority;
- (void)setContentConfiguration:(id)configuration;
- (void)willDisplayInDataViewController:(id)controller atIndexPath:(id)path;
- (void)didFirstDisplayInDataViewController:(id)controller;
- (void)didDisplayInDataViewController:(id)controller atIndexPath:(id)path visibleIntersection:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })intersection;
- (void)didDisplayWithZeroVisibilityInDataViewController:(id)controller atIndexPath:(id)path;
- (void)didEndDisplayingInDataViewController:(id)controller reason:(unsigned long long)reason;
- (void)didEndScrollingInDataViewController:(id)controller;
- (void)cleanup;
- (id)calculatedLayoutMetrics;
- (id)keyCommands;
- (_Bool)isKeyboardSelectable;
- (void)didKeyboardSelectInDataViewController:(id)controller atIndexPath:(id)path;
- (void)prepareToDisplayMenuOnPrimaryAction;
- (void)populateMenuWithTitle:(id)title actionItems:(id)items;
- (void)populateMenuWithActionItems:(id)items;
- (_Bool)_tfn_highlightSeparatorsVisible;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_tfn_accessoryInsets;
- (id)_tfn_accessoryViewsLeading:(_Bool)leading;
- (_Bool)isKeyboardHighlighted;

@end

#endif /* TFNCollectionViewListCell_h */
