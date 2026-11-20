//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASPlaybackAudiowaveView_h
#define TASPlaybackAudiowaveView_h
@import Foundation;

@class NSNumber, UIView;

@interface TASPlaybackAudiowaveView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 audiowaveTheme;
    @40@0:8:16@24@32 audiowaveViewModel;
    @40@0:8:16@24@32 $__lazy_storage_$_audiowaveView;
    @40@0:8:16@24@32 reduceMotionCancellable;
}

@property (nonatomic, retain) NSNumber *audioLevel;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TASPlaybackAudiowaveView_h */
