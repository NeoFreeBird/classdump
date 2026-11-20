//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVLUTImage_h
#define PTVLUTImage_h
@import Foundation;

@class NSData, NSObject;

@interface PTVLUTImage : NSObject

@property (readonly, nonatomic) unsigned long long colorCubeDimension;
@property (readonly, nonatomic) struct CGColorSpace * colorSpace;
@property (readonly, nonatomic) NSData *colorCubeData;

/* class methods */
+ (id)colorCubeDataFromCGImage:(struct CGImage *)cgimage;

/* instance methods */
- (id)initWithUIImage:(id)uiimage;
- (void)dealloc;
- (id)createCIFilter;

@end

#endif /* PTVLUTImage_h */
