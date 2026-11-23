//
#ifndef TFNStackLayout_h
#define TFNStackLayout_h
@import Foundation;

#include "TFNStackLayoutItem.h"

@class NSArray, NSObject;

@interface TFNStackLayout : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double spacing;
@property (weak, nonatomic) TFNStackLayoutItem *representingItem;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) TFNStackLayoutItem *firstVisibleItem;
@property (readonly, nonatomic) TFNStackLayoutItem *lastVisibleItem;
@property (readonly, nonatomic) double topContentInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } baselineEdgeInsets;

/* instance methods */
- (void)addItemsForViewIdentifiers:(id)identifiers inLayoutStateSet:(id)set layouts:(id)layouts;
- (void)addItemsForViewIdentifiers:(id)identifiers inLayoutStateSet:(id)set verticalLayouts:(id)layouts;
- (void)addItemsForViewIdentifiers:(id)identifiers inLayoutStateSet:(id)set horizontalLayouts:(id)layouts;
- (void)layoutViews:(id)views;
- (id)addItemWithIdentifier:(long long)identifier;
- (id)addItemForLayout:(id)layout withIdentifier:(long long)identifier;
- (id)objectAtIndexedSubscript:(long long)subscript;
- (id)findItemWithIdentifier:(long long)identifier;

@end

#endif /* TFNStackLayout_h */
