//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTAAnimationColorReplacement_h
#define TTAAnimationColorReplacement_h
@import Foundation;

@class NSObject, NSString, UIColor;

@interface TTAAnimationColorReplacement : NSObject

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *replacementColor;
@property (retain, nonatomic) NSString *layerName;

/* instance methods */
- (id)initWithColor:(id)color replacementColor:(id)color layerName:(id)name;

@end

#endif /* TTAAnimationColorReplacement_h */
