//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNBarButtonItemConfiguration_h
#define TFNBarButtonItemConfiguration_h
@import Foundation;

@class NSObject, NSString, UIImage;

@interface TFNBarButtonItemConfiguration : NSObject {
    /* instance variables */
    NSString *_vectorImageName;
    id /* block */ _onImageLoad;
}

@property (nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;
@property (readonly, copy, nonatomic) NSString *accessibilityIdentifier;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } portraitImageEdgeInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } landscapeImageEdgeInsets;

/* instance methods */
- (id)initWithVectorImageName:(id)name accessibilityLabel:(id)label;
- (id)initWithVectorImageName:(id)name accessibilityLabel:(id)label onImageLoad:(id /* block */)load;
- (id)initWithVectorImageName:(id)name accessibilityLabel:(id)label accessibilityIdentifier:(id)identifier;
- (id)initWithVectorImageName:(id)name accessibilityLabel:(id)label accessibilityIdentifier:(id)identifier portraitImageEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets landscapeImageEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)initWithVectorImageName:(id)name accessibilityLabel:(id)label accessibilityIdentifier:(id)identifier portraitImageEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets landscapeImageEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets onImageLoad:(id /* block */)load;

@end

#endif /* TFNBarButtonItemConfiguration_h */
