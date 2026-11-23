//
#ifndef TFNFlexibleLayoutSpaceItem_h
#define TFNFlexibleLayoutSpaceItem_h
@import Foundation;

#include "TFNFlexibleLayoutSpaceItem-Protocol.h"

@class NSObject, NSString;

@interface TFNFlexibleLayoutSpaceItem : NSObject <TFNFlexibleLayoutSpaceItem>

@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly, nonatomic) id /* block */ minimumLengthCalculator;
@property (readonly, nonatomic) id /* block */ weightCalculator;
@property (readonly, nonatomic) id /* block */ totalLengthCalculator;
@property (readonly, nonatomic) id /* block */ layoutContainerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)verticalSpaceWithMinimumLengthCalculator:(id /* block */)calculator weightCalculator:(id /* block */)calculator layoutContainerProvider:(id /* block */)provider totalLengthCalculator:(id /* block */)calculator;
+ (id)verticalSpaceWithMinimumLength:(double)length weight:(double)weight layoutContainerProvider:(id /* block */)provider totalLengthCalculator:(id /* block */)calculator;
+ (id)verticalSpaceWithMinimumLength:(double)length weight:(double)weight layoutContainerProvider:(id /* block */)provider;
+ (id /* block */)flexibleLayoutSpaceLayoutFrameCalculator;
+ (id /* block */)flexibleLayoutSpaceSizeCalculator;
+ (id)_tfn_spaceItemsManagedByLayoutContainer:(id)container withOrientation:(long long)orientation;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tfn_calculateBoundsToFillForSpaceItem:(id)item layoutBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds size:(struct CGSize { double x0; double x1; })size layoutMetrics:(id)metrics;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tfn_calculateMinimumBoundsForSpaceItems:(id)items withinBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds usingLayoutContainer:(id)container layoutMetrics:(id)metrics;
+ (double)_tfn_totalAvailableSpaceItems:(id)items withOrientation:(long long)orientation minimumBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds boundsToFill:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fill layoutMetrics:(id)metrics;

/* instance methods */
- (id)initWithOrientation:(long long)orientation minimumLengthCalculator:(id /* block */)calculator weightCalculator:(id /* block */)calculator layoutContainerProvider:(id /* block */)provider totalLengthCalculator:(id /* block */)calculator;
- (id /* block */)tfn_flexibleLayoutSizeCalculator;
- (id /* block */)tfn_flexibleLayoutFrameCalculator;
- (id /* block */)tfn_flexibleLayoutContentSpacingCalculator;
- (id)tfn_withFlexibleLayoutSizeCalculator:(id /* block */)calculator;
- (id)tfn_withFlexibleLayoutFrameCalculator:(id /* block */)calculator;
- (id)tfn_withFlexibleLayoutContentInsetsCalculator:(id /* block */)calculator;
- (id)tfn_withFlexibleLayoutSpacingCalculator:(id /* block */)calculator;

@end

#endif /* TFNFlexibleLayoutSpaceItem_h */
