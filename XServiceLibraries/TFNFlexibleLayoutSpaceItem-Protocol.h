//
#ifndef TFNFlexibleLayoutSpaceItem_Protocol_h
#define TFNFlexibleLayoutSpaceItem_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNFlexibleLayoutSpaceItem <NSObject>

@required

@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly, nonatomic) id /* block */ minimumLengthCalculator;
@property (readonly, nonatomic) id /* block */ weightCalculator;
@property (readonly, nonatomic) id /* block */ totalLengthCalculator;
@property (readonly, nonatomic) id /* block */ layoutContainerProvider;

@optional

@end

#endif /* TFNFlexibleLayoutSpaceItem_Protocol_h */
