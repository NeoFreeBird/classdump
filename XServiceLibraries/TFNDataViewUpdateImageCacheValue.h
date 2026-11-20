//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
