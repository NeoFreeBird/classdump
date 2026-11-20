//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNFixedSpaceItem_h
#define TFNFixedSpaceItem_h
@import Foundation;

@class NSObject, UIColor;

@interface TFNFixedSpaceItem : NSObject

@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) UIColor *color;

/* instance methods */
- (id)initWithHeight:(double)height;
- (id)initWithHeight:(double)height andColor:(id)color;

@end

#endif /* TFNFixedSpaceItem_h */
