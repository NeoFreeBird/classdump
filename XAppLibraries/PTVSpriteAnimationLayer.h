//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVSpriteAnimationLayer_h
#define PTVSpriteAnimationLayer_h
@import Foundation;

@class CALayer;

@interface PTVSpriteAnimationLayer : CALayer {
    /* instance variables */
    struct CGSize { double width; double height; } _imageSize;
    struct CGSize { double width; double height; } _animationFrameSize;
}

@property (readonly, nonatomic) _Bool animating;

/* instance methods */
- (id)initWithLayer:(id)layer;
- (id)initWithImage:(struct CGImage *)image frameSize:(struct CGSize { double x0; double x1; })size;
- (id)initWithImage:(struct CGImage *)image frameSize:(struct CGSize { double x0; double x1; })size traitCollection:(id)collection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentForAnimationFrame:(long long)frame;
- (long long)maxFrames;
- (void)animateWithFrameCount:(unsigned long long)count duration:(double)duration;
- (void)stopAnimating;
- (void)setCurrentFrame:(long long)frame;

@end

#endif /* PTVSpriteAnimationLayer_h */
