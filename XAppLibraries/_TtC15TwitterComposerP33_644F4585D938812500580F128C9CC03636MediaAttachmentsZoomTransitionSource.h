//
#ifndef _TtC15TwitterComposerP33_644F4585D938812500580F128C9CC03636MediaAttachmentsZoomTransitionSource_h
#define _TtC15TwitterComposerP33_644F4585D938812500580F128C9CC03636MediaAttachmentsZoomTransitionSource_h
@import Foundation;

#include "XPhotoEditorZoomTransitionSource-Protocol.h"

@class NSObject;

@interface TwitterComposer.(MediaAttachmentsZoomTransitionSource in _644F4585D938812500580F128C9CC036) : NSObject <XPhotoEditorZoomTransitionSource> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 attachmentsViewControllerProvider;
    @40@0:8:16@24@32 attachmentProvider;
}

/* instance methods */
- (id)photoEditorZoomTransitionSourceView;
- (void)photoEditorZoomTransitionSetSourceHidden:(_Bool)hidden;
- (id)photoEditorZoomTransitionSourceOverlayView;
- (id)photoEditorZoomTransitionSourceImage;
- (id)photoEditorZoomTransitionBeginPlaybackRelay;
- (double)photoEditorZoomTransitionPlaybackRelayTime;
- (void)photoEditorZoomTransitionEndPlaybackRelay;
- (void)photoEditorZoomTransitionResumePlaybackAtTime:(double)time;
- (void)photoEditorZoomTransitionPrepareSource;
- (id)init;

@end

#endif /* _TtC15TwitterComposerP33_644F4585D938812500580F128C9CC03636MediaAttachmentsZoomTransitionSource_h */
