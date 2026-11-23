//
#ifndef TAVCaptionStyle_h
#define TAVCaptionStyle_h
@import Foundation;

@class NSDictionary, NSObject, UIColor;

@interface TAVCaptionStyle : NSObject

@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) _Bool foregroundColorRequired;
@property (retain, nonatomic) UIColor *windowColor;
@property (nonatomic) _Bool windowColorRequired;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) _Bool backgroundColorRequired;
@property (nonatomic) double relativeCharacterSize;
@property (retain, nonatomic) NSDictionary *fontDescriptors;
@property (retain, nonatomic) NSDictionary *fontRequired;
@property (nonatomic) _Bool textEdgeStyleRequired;
@property (readonly, nonatomic) long long textEdgeStyle;

/* class methods */
+ (double)defaultCaptionCornerRadius;

/* instance methods */
- (id)init;
- (id)fontDescriptorForFamilyName:(id)name;
- (id)fontDescriptorForGenericName:(id)name;
- (id)foregroundColorForDesiredColor:(id)color;
- (id)textBackgroundColorForDesiredColor:(id)color;
- (id)captionBackgroundColorForDesiredColor:(id)color;
- (long long)textEdgeStyleForDesiredStyle:(long long)style;
- (id)description;

@end

#endif /* TAVCaptionStyle_h */
