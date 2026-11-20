//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XPhotoEditorZoomTransitionSource_Protocol_h
#define XPhotoEditorZoomTransitionSource_Protocol_h
@import Foundation;

@protocol XPhotoEditorZoomTransitionSource

@required

/* required instance methods */
- (id)photoEditorZoomTransitionSourceView;
- (void)photoEditorZoomTransitionSetSourceHidden:(_Bool)hidden;

@optional

/* optional instance methods */
- (id)photoEditorZoomTransitionSourceOverlayView;
- (void)photoEditorZoomTransitionPrepareSource;
- (id)photoEditorZoomTransitionSourceImage;
- (id)photoEditorZoomTransitionBeginPlaybackRelay;
- (double)photoEditorZoomTransitionPlaybackRelayTime;
- (void)photoEditorZoomTransitionEndPlaybackRelay;
- (void)photoEditorZoomTransitionResumePlaybackAtTime:(double)time;

@end

#endif /* XPhotoEditorZoomTransitionSource_Protocol_h */
