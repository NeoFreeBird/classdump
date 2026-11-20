//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift25VideoHeaderViewControlBar_h
#define _TtC14T1TwitterSwift25VideoHeaderViewControlBar_h
@import Foundation;

#include "TAVControlBarDelegate-Protocol.h"

@class T1TwitterSwift.VideoHeaderViewControlBar.FlexibleSpaceItem ?, T1TwitterSwift.VideoHeaderViewControlBar.MuteButtonItem ?, T1TwitterSwift.VideoHeaderViewControlBar.PlayButtonItem ?, T1TwitterSwift.VideoHeaderViewControlBar.TimeProgressDisplayItem ?, UIView, _$sSo13TAVControlBarC, _$sSo21TAVControlBarScrubberCSg;

@interface T1TwitterSwift.VideoHeaderViewControlBar : UIView <TAVControlBarDelegate> { // (Swift)
    /* instance variables */
    __C.TAVControlBar controlBar;
    T1TwitterSwift.VideoHeaderViewControlBar.PlayButtonItem ? playButtonIfLoaded;
    T1TwitterSwift.VideoHeaderViewControlBar.PlayButtonItem ? $__lazy_storage_$_playButton;
    __C.TAVControlBarScrubber? scrubberIfLoaded;
    __C.TAVControlBarScrubber? $__lazy_storage_$_scrubber;
    T1TwitterSwift.VideoHeaderViewControlBar.FlexibleSpaceItem ? flexibleSpaceIfLoaded;
    T1TwitterSwift.VideoHeaderViewControlBar.FlexibleSpaceItem ? $__lazy_storage_$_flexibleSpace;
    T1TwitterSwift.VideoHeaderViewControlBar.TimeProgressDisplayItem ? timeProgressDisplayIfLoaded;
    T1TwitterSwift.VideoHeaderViewControlBar.TimeProgressDisplayItem ? $__lazy_storage_$_timeProgressDisplay;
    T1TwitterSwift.VideoHeaderViewControlBar.MuteButtonItem ? muteButtonIfLoaded;
    T1TwitterSwift.VideoHeaderViewControlBar.MuteButtonItem ? $__lazy_storage_$_muteButton;
}

/* instance methods */
- (id)controlBar:(id)bar itemForIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift25VideoHeaderViewControlBar_h */
