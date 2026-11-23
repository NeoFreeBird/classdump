//
#ifndef TFNFlexibleLayoutSpaceView_h
#define TFNFlexibleLayoutSpaceView_h
@import Foundation;

#include "TFNFlexibleLayoutSpaceItem-Protocol.h"

@class NSString, UIView;

@interface TFNFlexibleLayoutSpaceView : UIView <TFNFlexibleLayoutSpaceItem>

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
+ (id)verticalSpaceWithMinimumLengthCalculator:(id /* block */)calculator weightCalculator:(id /* block */)calculator totalLengthCalculator:(id /* block */)calculator;
+ (id)verticalSpaceWithMinimumLength:(double)length weight:(double)weight totalLengthCalculator:(id /* block */)calculator;
+ (id)verticalSpaceWithMinimumLength:(double)length weight:(double)weight;

/* instance methods */
- (id)initWithOrientation:(long long)orientation minimumLengthCalculator:(id /* block */)calculator weightCalculator:(id /* block */)calculator totalLengthCalculator:(id /* block */)calculator;
- (id /* block */)tfn_flexibleLayoutSizeCalculator;
- (id /* block */)tfn_flexibleLayoutFrameCalculator;
- (id /* block */)tfn_flexibleLayoutContentSpacingCalculator;
- (id)tfn_withFlexibleLayoutSizeCalculator:(id /* block */)calculator;
- (id)tfn_withFlexibleLayoutFrameCalculator:(id /* block */)calculator;
- (id)tfn_withFlexibleLayoutContentInsetsCalculator:(id /* block */)calculator;
- (id)tfn_withFlexibleLayoutSpacingCalculator:(id /* block */)calculator;

@end

#endif /* TFNFlexibleLayoutSpaceView_h */
