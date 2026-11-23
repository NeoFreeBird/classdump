//
#ifndef TFNVerticalLayout_h
#define TFNVerticalLayout_h
@import Foundation;

#include "TFNStackLayout.h"

@class NSMutableArray;

@interface TFNVerticalLayout : TFNStackLayout {
    /* instance variables */
    NSMutableArray *_items;
    NSMutableArray *_orderedItems;
    _Bool _needsLayout;
    _Bool _isLayingOut;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _baselineEdgeInsets;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) _Bool baselineRelativeSpacing;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } defaultBaselineEdgeInsets;
@property (nonatomic) unsigned long long horizontalAlignment;

/* instance methods */
- (id)init;
- (void)setSpacing:(double)spacing;
- (id)addItemWithIdentifier:(long long)identifier;
- (id)addItemForLayout:(id)layout withIdentifier:(long long)identifier;
- (id)objectAtIndexedSubscript:(long long)subscript;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })baselineEdgeInsets;
- (void)_tfn_setNeedsLayout;
- (void)_tfn_layoutIfNeeded;
- (void)_tfn_itemDidUpdate:(id)update;
- (id)items;
- (_Bool)isBaselineRelativeSpacing;

@end

#endif /* TFNVerticalLayout_h */
