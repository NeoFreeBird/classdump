//
#ifndef _TtC7XGoLive21GoLiveReplayFrameView_h
#define _TtC7XGoLive21GoLiveReplayFrameView_h
@import Foundation;

@class Swift.Bool, UIView, XGoLive.GoLiveRemoteImageView, _$sSd, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XGoLive.GoLiveReplayFrameView : UIView { // (Swift)
    /* instance variables */
    Swift.Double time;
    Swift.Bool showsTime;
    XGoLive.GoLiveRemoteImageView imageView;
    __C.UIView timeBackground;
    __C.UILabel timeLabel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XGoLive21GoLiveReplayFrameView_h */
