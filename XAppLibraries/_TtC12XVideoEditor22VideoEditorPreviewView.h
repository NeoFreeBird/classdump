//
#ifndef _TtC12XVideoEditor22VideoEditorPreviewView_h
#define _TtC12XVideoEditor22VideoEditorPreviewView_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class Swift.Bool, Swift.Bool XVideoEditor.VideoEditorTabID _$scSg, TAVSharedAudioSession.SharedAudioSession.ConfigurationToken ?, TwitterAVCoreAVRKit.AVROutputView ?, UIView, XGravityLayout.XGravityLayoutController, XVideoEditor.VideoCaptionsTrackingView ?, XVideoEditor.VideoEditorGestureGuidesView ?, XVideoEditor.VideoEditorOverlayTrashController ?, XVideoEditor.VideoEditorPreviewView.Mode, XVideoEditor.VideoEditorSession, XVideoEditor.VideoEditorTabID ?, _$s7Combine14AnyCancellableCMn ?, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$sSbycSg, _$sSh -> XVideoEditor.VideoEditorPreviewView.PauseReason, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo11UIImageViewC, _$sSo13TAVPlayerViewCSg, _$sSo22UIPanGestureRecognizerCSg, _$sSo22UITapGestureRecognizerCSg, _$sSo24UIPinchGestureRecognizerCSg, _$sSo27UIRotationGestureRecognizerCSg, _$sSo9TAVPlayerCSg, _$sypSg, __C.CMSampleBuffer ?, __C.CMSampleBuffer _$scSg ->, __C.CMTime ?;

@interface XVideoEditor.VideoEditorPreviewView : UIView <TAVPlaybackObserver, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    __C.TAVPlayerView? _tavPlayerView;
    TwitterAVCoreAVRKit.AVROutputView ? _outputView;
    __C.TAVPlayer? _tavPlayer;
    XVideoEditor.VideoEditorSession _editorSession;
    TAVSharedAudioSession.SharedAudioSession.ConfigurationToken ? _audioSessionToken;
    Swift.Bool _hasRenderedFirstFrame;
    __C.UIImageView _previewImageView;
    XGravityLayout.XGravityLayoutController _gravityLayout;
    XVideoEditor.VideoEditorPreviewView.Mode _mode;
    Swift.Bool _isPaused;
    Swift.Set -> XVideoEditor.VideoEditorPreviewView.PauseReason _pauseReasons;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never _isPlayingSubject;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never _didRenderFirstFrameSubject;
    __C.CMTime ? _playbackTimeBeforePausedFrame;
    Any? _idleTimerToken;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    Swift.Bool _isPausedByGestureTracking;
    __C.CMSampleBuffer ? _latestSourceSampleBuffer;
    __C.UITapGestureRecognizer? _tapGesture;
    __C.UIPanGestureRecognizer? _panGesture;
    __C.UIPinchGestureRecognizer? _pinchGesture;
    __C.UIRotationGestureRecognizer? _rotationGesture;
    XVideoEditor.VideoCaptionsTrackingView ? _captionsTrackingView;
    XVideoEditor.VideoEditorGestureGuidesView ? _gestureGuidesView;
    XVideoEditor.VideoEditorOverlayTrashController ? _trashController;
    XVideoEditor.VideoEditorTabID ? _trashOverlayTabID;
    Swift.Bool _isOverlayGestureActive;
    __C.CMTime ? _transitionSeekTime;
    nominal type descriptor for Combine.AnyCancellable ? _transitionPlaybackCancellable;
    Swift.Bool isOverlayGesturesEnabled;
    Swift.Bool XVideoEditor.VideoEditorTabID _$scSg overlayTapHandler;
    (() -> Swift.Bool)? videoTapHandler;
    Swift.Bool XVideoEditor.VideoEditorTabID _$scSg isOverlayDeletable;
    Swift.Bool XVideoEditor.VideoEditorTabID _$scSg overlayDeleteHandler;
    __C.CMSampleBuffer _$scSg -> renderRequestBlock;
}

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_didTap:(id)tap;
- (void)_handleOverlayPan:(id)pan;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XVideoEditor22VideoEditorPreviewView_h */
