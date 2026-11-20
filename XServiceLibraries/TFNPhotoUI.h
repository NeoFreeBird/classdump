//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNPhotoUI_h
#define TFNPhotoUI_h
@import Foundation;

@class NSObject;

@interface TFNPhotoUI : NSObject

/* class methods */
+ (id)livePhotoBadgeImageFitsToSize:(struct CGSize { double x0; double x1; })size;
+ (void)presentLimitedLibraryPickerFromViewController:(id)controller;

@end

#endif /* TFNPhotoUI_h */
