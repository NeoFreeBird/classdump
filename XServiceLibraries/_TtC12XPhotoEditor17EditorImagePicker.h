//
#ifndef _TtC12XPhotoEditor17EditorImagePicker_h
#define _TtC12XPhotoEditor17EditorImagePicker_h
@import Foundation;

@class NSObject, _$sySaySo7UIImageCGcSg, _$sySi_So7UIImageCSgtcSg, _$sySicSg;

@interface XPhotoEditor.EditorImagePicker : NSObject { // (Swift)
    /* instance variables */
    (([__C.UIImage]) -> ())? completion;
    ((Swift.Int) -> ())? onSelectionCount;
    ((Swift.Int, __C.UIImage?) -> ())? onImageLoaded;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC12XPhotoEditor17EditorImagePicker_h */
