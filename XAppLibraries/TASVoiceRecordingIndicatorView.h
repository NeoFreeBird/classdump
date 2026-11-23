//
#ifndef TASVoiceRecordingIndicatorView_h
#define TASVoiceRecordingIndicatorView_h
@import Foundation;

@class UIView;

@interface TASVoiceRecordingIndicatorView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 opacityAnimationDuration;
}

/* instance methods */
- (id)initWithDiameter:(double)diameter;
- (id)initWithCoder:(id)coder;
- (void)startAnimating;
- (void)stopAnimating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TASVoiceRecordingIndicatorView_h */
