//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor33VideoEditorColorEyedropperRequest_h
#define _TtC12XVideoEditor33VideoEditorColorEyedropperRequest_h
@import Foundation;

@class Swift.Bool, XVideoEditor.VideoEditorColorEyedropperRequest _$scSg ->, XVideoEditor.VideoEditorColorEyedropperRequest.Presentation, _$s12XPhotoEditor28MediaColorViewportPickerViewC5LoupeOMn, _$s12XPhotoEditor28MediaColorViewportPickerViewC5LoupeOMn _$scSg ->, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$sSbSo7UIColorCc, _$syycSg, _TtCs12_SwiftObject;

@interface XVideoEditor.VideoEditorColorEyedropperRequest : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XVideoEditor.VideoEditorColorEyedropperRequest.Presentation presentation;
    XVideoEditor.VideoEditorColorEyedropperRequest _$scSg -> dismissHandler;
    nominal type descriptor for XPhotoEditor.MediaColorViewportPickerView.Loupe _$scSg -> loupeHandler;
    (() -> ())? viewportSampleFailureHandler;
    (() -> ())? viewportFrameChangeHandler;
    (() -> ())? loupeEndedUnderTrayHandler;
    (__C.UIColor) -> Swift.Bool _colorHandler;
    XVideoEditor.VideoEditorColorEyedropperRequest.Ending function type (escaping) _completion;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never _isReachingUnderTraySubject;
    Swift.Bool isFinished;
    nominal type descriptor for XPhotoEditor.MediaColorViewportPickerView.Loupe loupe;
}

@end

#endif /* _TtC12XVideoEditor33VideoEditorColorEyedropperRequest_h */
