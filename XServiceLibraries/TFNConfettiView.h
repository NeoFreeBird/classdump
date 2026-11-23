//
#ifndef TFNConfettiView_h
#define TFNConfettiView_h
@import Foundation;

@class UIView;

@interface TFNConfettiView : UIView { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 backgroundLayer;
    B24@0:8@"NSString"16 configuration;
    B24@0:8@"NSString"16 ongoingConfettiLayers;
    B24@0:8@"NSString"16 reduceMotionCancellable;
}

/* class methods */
+ (id)hashflagConfigurationWithImageDictionary:(id)dictionary duration:(double)duration particleCount:(float)count;
+ (id)presentConfettiWithConfiguration:(id)configuration in:(id)in completion:(id /* block */)completion;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)onTap:(id)tap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TFNConfettiView_h */
