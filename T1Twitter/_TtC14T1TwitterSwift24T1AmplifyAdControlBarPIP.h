//
#ifndef _TtC14T1TwitterSwift24T1AmplifyAdControlBarPIP_h
#define _TtC14T1TwitterSwift24T1AmplifyAdControlBarPIP_h
@import Foundation;

@class UIView, _$s14TFSTwitterCore16TwitterMediaInfoCMn, _$s16TwitterAdFormats28PlayerViewPlaybackAttachmentCMn, _$s5TAVUI19VideoImageComponentCMn, _$s5TAVUI19VideoLabelComponentCMn, _$sSS, _$sSo13TAVPlayerViewCSgXw;

@interface T1TwitterSwift.T1AmplifyAdControlBarPIP : UIView { // (Swift)
    /* instance variables */
    Swift.String accountID;
    nominal type descriptor for TFSTwitterCore.TwitterMediaInfo mediaInfo;
    weak __C.TAVPlayerView? playerView;
    nominal type descriptor for TwitterAdFormats.PlayerViewPlaybackAttachment playbackAttachment;
    nominal type descriptor for TAVUI.VideoImageComponent pipPreviewImageComponent;
    nominal type descriptor for TAVUI.VideoLabelComponent pipCountdownLabelComponent;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame accountID:(id)id mediaInfo:(id)info playerView:(id)view;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift24T1AmplifyAdControlBarPIP_h */
