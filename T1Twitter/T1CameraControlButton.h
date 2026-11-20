//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CameraControlButton_h
#define T1CameraControlButton_h
@import Foundation;

@class NSString, TFNButton;

@interface T1CameraControlButton : TFNButton

@property (copy, nonatomic) NSString *accessibilityDefaultValue;
@property (copy, nonatomic) NSString *accessibilitySelectedValue;

/* class methods */
+ (id)defaultControlButton;
+ (id)defaultControlButtonWithImageNamed:(id)named selectedImageNamed:(id)named;
+ (id)defaultControlButtonWithImageNamed:(id)named selectedImageNamed:(id)named imageSize:(struct CGSize { double x0; double x1; })size;

/* instance methods */
- (void)setImageNamed:(id)named;
- (void)setImageNamed:(id)named fillColor:(id)color selectedImageNamed:(id)named fillColor:(id)color;
- (void)setImageNamed:(id)named fillColor:(id)color selectedImageNamed:(id)named fillColor:(id)color imageSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setAccessibilityValue:(id)value;
- (id)accessibilityValue;

@end

#endif /* T1CameraControlButton_h */
