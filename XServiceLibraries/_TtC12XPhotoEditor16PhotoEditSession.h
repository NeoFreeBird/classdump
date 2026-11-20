//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor16PhotoEditSession_h
#define _TtC12XPhotoEditor16PhotoEditSession_h
@import Foundation;

@class DispatchQueue, Swift.Bool, XPhotoEditor.EditCheckpoint ?, XPhotoEditor.EditorResultRenderer, XPhotoEditor.PhotoEditSession.RenderedImageCache ?, XPhotoEditor.PhotoEditSessionDelegate ?, _$sSS, _$sSa -> XPhotoEditor.EditCheckpoint, _$sSi, _$sSo7UIImageC4base_So7CIImageC5imagetSg, _TtCs12_SwiftObject;

@interface XPhotoEditor.PhotoEditSession : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XPhotoEditor.EditorResultRenderer renderer;
    DispatchQueue livePreviewQueue;
    (base: __C.UIImage, image: __C.CIImage)? livePreviewSource;
    Swift.Array -> XPhotoEditor.EditCheckpoint checkpoints;
    Swift.Int currentCheckpointIndex;
    Swift.Bool hasChangesInCurrentSession;
    Swift.Bool isBuildingResult;
    XPhotoEditor.PhotoEditSession.RenderedImageCache ? renderedImageCache;
    Swift.String initialParametersKey;
    XPhotoEditor.EditCheckpoint ? initialCheckpoint;
    XPhotoEditor.PhotoEditSessionDelegate ? delegate;
}

@end

#endif /* _TtC12XPhotoEditor16PhotoEditSession_h */
