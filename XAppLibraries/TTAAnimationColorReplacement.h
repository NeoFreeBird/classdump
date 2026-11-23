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
