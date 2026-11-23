//
#ifndef _TtC12XVideoEditor20ProjectFrameRenderer_h
#define _TtC12XVideoEditor20ProjectFrameRenderer_h
@import Foundation;

@class XVideoEditor.LayoutPlan, XVideoEditor.PixelBufferPool, XVideoEditor.ProjectFrameRenderer.ReleaseSchedule ?, XVideoEditor.RenderObserver ?, XVideoEditor.RenderedFormats XVideoEditor.UprightPassFormat, XVideoEditor.SerialStage XVideoEditor.VideoEditorSDRToneMapper, _$sSD -> XVideoEditor.CropKey XVideoEditor.SerialStage XVideoEditor.VideoEditorCropProcessor, _$sSa -> XVideoEditor.ProjectFrameRenderer.PlacedText, _$sSa -> XVideoEditor.TextItem, _$sSo6NSLockC, _TtCs12_SwiftObject, __C.CGSize;

@interface XVideoEditor.ProjectFrameRenderer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.CGSize renderSize;
    XVideoEditor.LayoutPlan layoutPlan;
    XVideoEditor.SerialStage XVideoEditor.VideoEditorSDRToneMapper toneMapper;
    XVideoEditor.RenderedFormats XVideoEditor.UprightPassFormat uprightPasses;
    XVideoEditor.PixelBufferPool pool;
    XVideoEditor.ProjectFrameRenderer.ReleaseSchedule ? releaseSchedule;
    XVideoEditor.RenderObserver ? observer;
    __C.NSLock lock;
    Swift.Dictionary -> XVideoEditor.CropKey XVideoEditor.SerialStage XVideoEditor.VideoEditorCropProcessor cropStages;
    Swift.Array -> XVideoEditor.ProjectFrameRenderer.PlacedText _texts;
    Swift.Array -> XVideoEditor.TextItem _deferredTexts;
}

@end

#endif /* _TtC12XVideoEditor20ProjectFrameRenderer_h */
