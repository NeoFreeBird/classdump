//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1MediaSlider_h
#define T1MediaSlider_h
@import Foundation;

@class UISlider;

@interface T1MediaSlider : UISlider

@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) double thumbWidth;
@property (readonly, nonatomic) double trackHeight;
@property (readonly, nonatomic) _Bool padEndsOfTrack;

/* class methods */
+ (id)tfn_thumbImageWithWidth:(double)width;
+ (id)tfn_trackImageWithColor:(id)color height:(double)height horizontalPadding:(double)padding;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame style:(unsigned long long)style;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame style:(unsigned long long)style thumbWidth:(double)width trackHeight:(double)height padEndsOfTrack:(_Bool)track;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect value:(float)value;
- (void)private_updateImages;

@end

#endif /* T1MediaSlider_h */
