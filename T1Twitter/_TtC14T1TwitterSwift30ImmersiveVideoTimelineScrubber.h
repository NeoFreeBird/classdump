//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift30ImmersiveVideoTimelineScrubber_h
#define _TtC14T1TwitterSwift30ImmersiveVideoTimelineScrubber_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject, T1TwitterSwift.ImmersiveScrubPlaybackSuspension ?, T1TwitterSwift.ImmersiveVideoTimelineScrubberDelegate ?, T1TwitterSwift.ImmersiveVideoTimelineView, _$sSo22UIPanGestureRecognizerCSg, _$sSo25UIImpactFeedbackGeneratorC, _$sSo28UILongPressGestureRecognizerCSg, _$sSo6UIViewCSgXw;

@interface T1TwitterSwift.ImmersiveVideoTimelineScrubber : NSObject <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveVideoTimelineView videoTimelineView;
    weak __C.UIView? gestureLocationView;
    weak __C.UIView? gestureHostView;
    __C.UIImpactFeedbackGenerator softImpactGenerator;
    __C.UIImpactFeedbackGenerator lightImpactGenerator;
    T1TwitterSwift.ImmersiveScrubPlaybackSuspension ? playbackSuspension;
    __C.UILongPressGestureRecognizer? $__lazy_storage_$_videoScrubLongPressGesture;
    __C.UIPanGestureRecognizer? $__lazy_storage_$_videoScrubPanGesture;
    T1TwitterSwift.ImmersiveVideoTimelineScrubberDelegate ? delegate;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)handleScrubGestureWithGestureRecognizer:(id)recognizer;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift30ImmersiveVideoTimelineScrubber_h */
