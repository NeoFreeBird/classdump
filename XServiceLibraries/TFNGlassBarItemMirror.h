//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNGlassBarItemMirror_h
#define TFNGlassBarItemMirror_h
@import Foundation;

@class NSObject, UIImageView, UIView;

@interface TFNGlassBarItemMirror : NSObject

@property (weak, nonatomic) UIView *itemView;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameInBar;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrameInBar;
@property (nonatomic) _Bool needsBackground;

/* instance methods */

@end

#endif /* TFNGlassBarItemMirror_h */
