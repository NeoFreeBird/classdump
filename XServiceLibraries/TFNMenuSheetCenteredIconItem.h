//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNMenuSheetCenteredIconItem_h
#define TFNMenuSheetCenteredIconItem_h
@import Foundation;

@class NSObject, UIColor, UIImage;

@interface TFNMenuSheetCenteredIconItem : NSObject

@property (readonly, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIColor *iconBackgroundColor;
@property (nonatomic) struct CGSize { double x0; double x1; } iconBackgroundSize;
@property (nonatomic) long long iconContentMode;
@property (nonatomic) double iconCornerRadius;
@property (nonatomic) _Bool adjustImageSizeForContentSizeCategory;

/* instance methods */
- (id)initWithIconImageName:(id)name height:(double)height fillColor:(id)color;
- (id)initWithIconImage:(id)image;

@end

#endif /* TFNMenuSheetCenteredIconItem_h */
