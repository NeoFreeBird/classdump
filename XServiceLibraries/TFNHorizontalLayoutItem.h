//
#ifndef TFNHorizontalLayoutItem_h
#define TFNHorizontalLayoutItem_h
@import Foundation;

#include "TFNHorizontalLayout.h"
#include "TFNStackLayout.h"
#include "TFNStackLayoutItem.h"

@interface TFNHorizontalLayoutItem : TFNStackLayoutItem

@property (readonly, weak, nonatomic) TFNHorizontalLayout *layout;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (weak, nonatomic) TFNHorizontalLayoutItem *previousItem;
@property (weak, nonatomic) TFNHorizontalLayoutItem *nextItem;
@property (nonatomic) double heightAboveVerticalAlignmentBaseline;
@property (nonatomic) double allocatedWidth;
@property (nonatomic) double adjustedHeight;
@property (readonly, nonatomic) _Bool hasAllocatedWidth;
@property (nonatomic) double trailingSpace;
@property (retain, nonatomic) TFNStackLayout *representedLayout;
@property (nonatomic) long long widthPriority;
@property (nonatomic) double minimumWidth;
@property (nonatomic) double maximumWidth;
@property (nonatomic) long long centeredVerticallyOnItemIdentifier;
@property (readonly, nonatomic) TFNHorizontalLayoutItem *previousVisibleItem;
@property (readonly, nonatomic) TFNHorizontalLayoutItem *nextVisibleItem;
@property (copy, nonatomic) id /* block */ heightWithWidthBlock;

/* instance methods */
- (id)initWithItemIdentifier:(long long)identifier layout:(id)layout;
- (_Bool)isVisible;
- (void)setIntrinsicContentSize:(struct CGSize { double x0; double x1; })size;
- (void)setTopContentInset:(double)inset;
- (void)setBaselineEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)setAdditionalEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)invalidateLayout;

@end

#endif /* TFNHorizontalLayoutItem_h */
