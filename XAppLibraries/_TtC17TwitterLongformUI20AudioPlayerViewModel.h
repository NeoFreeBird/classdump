//
#ifndef _TtC17TwitterLongformUI20AudioPlayerViewModel_h
#define _TtC17TwitterLongformUI20AudioPlayerViewModel_h
@import Foundation;

@class TwitterLongformUI.AudioPlayerViewModelDelegate ?, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$s12CoreGraphics7CGFloatVMn, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sSdSg, _$sSS, _TtCs12_SwiftObject;

@interface TwitterLongformUI.AudioPlayerViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published Swift.Bool _isPlaying;
    nominal type descriptor for Combine.Published Swift.String _remainingTime;
    nominal type descriptor for Combine.Published Swift.Double? _remainingSeconds;
    nominal type descriptor for Combine.Published Swift.String _timestamp;
    nominal type descriptor for Combine.Published nominal type descriptor for CoreGraphics.CGFloat _progressFraction;
    nominal type descriptor for Combine.Published Swift.String _playbackRateTitle;
    nominal type descriptor for Combine.Published Swift.Bool _isScrubbingEnabled;
    TwitterLongformUI.AudioPlayerViewModelDelegate ? delegate;
    Swift.String title;
}

@end

#endif /* _TtC17TwitterLongformUI20AudioPlayerViewModel_h */
