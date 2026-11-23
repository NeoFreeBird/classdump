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
