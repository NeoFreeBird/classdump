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
