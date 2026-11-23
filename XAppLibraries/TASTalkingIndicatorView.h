//
#ifndef TASTalkingIndicatorView_h
#define TASTalkingIndicatorView_h
@import Foundation;

@class NSNumber, UIColor, UIView;

@interface TASTalkingIndicatorView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 audiowaveTheme;
    @40@0:8:16@24@32 audiowaveViewModel;
    @40@0:8:16@24@32 $__lazy_storage_$_audiowaveView;
    @40@0:8:16@24@32 talkingIndicatorTimer;
    @40@0:8:16@24@32 reduceMotionCancellable;
}

@property (nonatomic, retain) NSNumber *audioLevel;
@property (nonatomic) double duration;
@property (nonatomic) _Bool pureRandomWaveformEnabled;
@property (nonatomic) double customDuration;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, retain) UIColor *audiowaveThemeTintColor;

/* instance methods */
- (id)init;
- (id)initWithAudiowaveThemeTintColor:(id)color;
- (id)initWithCoder:(id)coder;
- (void)doRandomWaveAnimation;
- (void)stopRandomWaveAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TASTalkingIndicatorView_h */
