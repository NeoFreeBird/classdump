//
#ifndef TFNDataViewUpdateImageCacheValue_h
#define TFNDataViewUpdateImageCacheValue_h
@import Foundation;

@class NSObject, UIImage;

@interface TFNDataViewUpdateImageCacheValue : NSObject

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) long long viewContentMode;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } layerContentsRect;

/* instance methods */
- (id)initWithView:(id)view image:(id)image;

@end

#endif /* TFNDataViewUpdateImageCacheValue_h */
