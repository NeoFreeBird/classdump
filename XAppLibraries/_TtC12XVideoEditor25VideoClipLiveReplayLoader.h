//
#ifndef _TtC12XVideoEditor25VideoClipLiveReplayLoader_h
#define _TtC12XVideoEditor25VideoClipLiveReplayLoader_h
@import Foundation;

@class Swift.Bool, XVideoEditor.VideoClipLiveReplayLoader.State, XVideoEditor.VideoClipLiveReplayLoader.State _$scSg ->, XVideoEditor.VideoClipLiveReplayLog, XVideoEditor.VideoClipStreamFrameGenerator ?, XVideoEditor.VideoClipTrimmerViewController.LiveReplaySource, _$sScTyyt _$ss5NeverOMn ?, _$sSd, _TtCs12_SwiftObject;

@interface XVideoEditor.VideoClipLiveReplayLoader : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XVideoEditor.VideoClipLiveReplayLoader.State state;
    XVideoEditor.VideoClipLiveReplayLoader.State _$scSg -> onStateChange;
    XVideoEditor.VideoClipTrimmerViewController.LiveReplaySource source;
    XVideoEditor.VideoClipLiveReplayLog log;
    Swift.Double startUptime;
    XVideoEditor.VideoClipStreamFrameGenerator ? frameGenerator;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? streamTask;
    Swift.Bool hasLoggedMissingFrames;
    Swift.Bool hasLoggedPlaybackError;
}

@end

#endif /* _TtC12XVideoEditor25VideoClipLiveReplayLoader_h */
