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
