//
#ifndef _TtC14T1TwitterSwift17GlassVideoDockBar_h
#define _TtC14T1TwitterSwift17GlassVideoDockBar_h
@import Foundation;

@class NSObject, Swift.Bool, T1TwitterSwift.ExternalPlaybackOverlayView, T1TwitterSwift.ExternalPlaybackOverlayView.Thumbnail ?, T1TwitterSwift.VideoBottomSegmentPlayerViewDelegate ?, _$s12CoreGraphics7CGFloatVMn, _$s9GlassDock0B10PlayerViewCMn, _$s9GlassDock0B15BadgeDetailViewCMn ?, _$s9GlassDock0B9BadgeViewCMn, _$sSS, _$sSiSg, _$sSo11UIImageViewC, __C.T1BroadcastPillViewType ?;

@interface T1TwitterSwift.GlassVideoDockBar : NSObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.VideoBottomSegmentPlayerViewDelegate ? delegate;
    nominal type descriptor for GlassDock.DockPlayerView dockPlayerView;
    Swift.String authorName;
    Swift.String username;
    nominal type descriptor for CoreGraphics.CGFloat videoAspectRatio;
    __C.T1BroadcastPillViewType ? livePillType;
    Swift.Bool isSkipToLiveVisible;
    Swift.Bool isPlaying;
    Swift.Int? remainingWholeSeconds;
    Swift.Bool isLivePillSuppressed;
    Swift.Int? liveViewerCount;
    nominal type descriptor for GlassDock.DockBadgeView livePillView;
    nominal type descriptor for GlassDock.DockBadgeDetailView ? $__lazy_storage_$_liveRowView;
    T1TwitterSwift.ExternalPlaybackOverlayView.Thumbnail ? thumbnailSource;
    __C.UIImageView thumbnailImageView;
    T1TwitterSwift.ExternalPlaybackOverlayView airPlayOverlayView;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift17GlassVideoDockBar_h */
