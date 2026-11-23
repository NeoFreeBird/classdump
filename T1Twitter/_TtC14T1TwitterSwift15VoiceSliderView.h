//
#ifndef _TtC14T1TwitterSwift15VoiceSliderView_h
#define _TtC14T1TwitterSwift15VoiceSliderView_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"

@class T1TwitterSwift.VoiceSlider, T1TwitterSwift.VoiceSliderViewDelegate ?, UIView, _$sSdSg, _$sSo11TAVPlayback_pSgXw, _$sSo16TAVPlaybackStateCSg, _$sSo7UIColorC, _$sSo7UILabelC;

@interface T1TwitterSwift.VoiceSliderView : UIView <TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    T1TwitterSwift.VoiceSliderViewDelegate ? delegate;
    weak __C.TAVPlayback? playback;
    __C.UIColor minimumTrackTintColor;
    __C.TAVPlaybackState? lastPlaybackState;
    Swift.Double? lastStartTime;
    T1TwitterSwift.VoiceSlider sliderControl;
    __C.UILabel elapsedTimeLabel;
    __C.UILabel remainingTimeLabel;
}

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift15VoiceSliderView_h */
