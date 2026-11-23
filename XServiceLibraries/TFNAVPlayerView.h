//
#ifndef TFNAVPlayerView_h
#define TFNAVPlayerView_h
@import Foundation;

@class AVPlayer, AVPlayerLayer, UIControl;

@interface TFNAVPlayerView : UIControl

@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AVPlayer *player;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame player:(id)player;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (_Bool)accessibilityIgnoresInvertColors;

@end

#endif /* TFNAVPlayerView_h */
