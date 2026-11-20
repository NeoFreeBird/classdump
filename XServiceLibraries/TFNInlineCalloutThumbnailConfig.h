//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNInlineCalloutThumbnailConfig_h
#define TFNInlineCalloutThumbnailConfig_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, UIColor;

@interface TFNInlineCalloutThumbnailConfig : NSObject <NSCopying> // (Swift)

@property (nonatomic) _Bool isBig;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) _Bool shouldAddCircle;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } iconInCircleInsets;

/* instance methods */
- (id)initWithIsBig:(_Bool)big color:(id)color shouldAddCircle:(_Bool)circle iconInCircleInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFNInlineCalloutThumbnailConfig_h */
