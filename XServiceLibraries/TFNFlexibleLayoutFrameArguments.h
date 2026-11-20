//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNFlexibleLayoutFrameArguments_h
#define TFNFlexibleLayoutFrameArguments_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFNFlexibleLayoutItem-Protocol.h"
#include "TFNLayoutMetrics.h"

@class NSObject;

@interface TFNFlexibleLayoutFrameArguments : NSObject <NSCopying>

@property (retain, nonatomic) TFNLayoutMetrics *layoutMetrics;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentSpacing;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } previousContentSpacing;
@property (retain, nonatomic) id <TFNFlexibleLayoutItem> previousItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } previousContentBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } layoutBounds;
@property (nonatomic) _Bool forSizing;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;

@end

#endif /* TFNFlexibleLayoutFrameArguments_h */
