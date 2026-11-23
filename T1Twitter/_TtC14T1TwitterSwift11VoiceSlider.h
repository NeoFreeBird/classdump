//
#ifndef _TtC14T1TwitterSwift11VoiceSlider_h
#define _TtC14T1TwitterSwift11VoiceSlider_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"

@class T1TwitterSwift.VoiceSliderDelegate ?, UIColor, UISlider, _$s12CoreGraphics7CGFloatVMn, _$sSaySo6UIViewCG, _$sSo11TAVPlayback_pSgXw, _$sSo25UIImpactFeedbackGeneratorC, _$sSo7UIImageCSg, __C.CMTime ?;

@interface T1TwitterSwift.VoiceSlider : UISlider <TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat markerHeight;
    __C.UIImpactFeedbackGenerator impactFeedbackGenerator;
    __C.UIImage? normalScrubberImage;
    __C.UIImage? selectedScrubberImage;
    T1TwitterSwift.VoiceSliderDelegate ? delegate;
    weak __C.TAVPlayback? playback;
    __C.CMTime ? lastDuration;
    [__C.UIView] markers;
}

@property (nonatomic, retain) UIColor *minimumTrackTintColor;

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)beginTrackingWithTouch:(id)touch withEvent:(id)event;
- (_Bool)continueTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)cancelTrackingWithEvent:(id)event;

@end

#endif /* _TtC14T1TwitterSwift11VoiceSlider_h */
