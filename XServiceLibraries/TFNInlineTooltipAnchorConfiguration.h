//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNInlineTooltipAnchorConfiguration_h
#define TFNInlineTooltipAnchorConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber, NSObject;

@interface TFNInlineTooltipAnchorConfiguration : NSObject <NSCopying> // (Swift)

@property (nonatomic) long long verticalPlacement;
@property (nonatomic, retain) NSNumber *horizontalPosition;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)arrow:(long long)arrow;
+ (id)arrow:(long long)arrow horizontalPosition:(id)position;

/* instance methods */
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFNInlineTooltipAnchorConfiguration_h */
