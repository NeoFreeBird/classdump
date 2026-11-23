//
#ifndef TFNMenuSheetBannerImageItem_h
#define TFNMenuSheetBannerImageItem_h
@import Foundation;

@class NSObject, UIImage;

@interface TFNMenuSheetBannerImageItem : NSObject

@property (readonly, nonatomic) UIImage *image;

/* instance methods */
- (id)initWithImage:(id)image;

@end

#endif /* TFNMenuSheetBannerImageItem_h */
