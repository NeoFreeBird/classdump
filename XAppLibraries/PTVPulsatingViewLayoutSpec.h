//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVPulsatingViewLayoutSpec_h
#define PTVPulsatingViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVPulsatingViewLayoutSpec : NSObject

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })StartingCircleFrameWithSuperViewSize:(struct CGSize { double x0; double x1; })size StartingCircleWidth:(double)width;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })EndingCircleFrameWithSuperviewSize:(struct CGSize { double x0; double x1; })size;

@end

#endif /* PTVPulsatingViewLayoutSpec_h */
