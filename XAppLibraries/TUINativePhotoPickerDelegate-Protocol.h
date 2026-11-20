//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUINativePhotoPickerDelegate_Protocol_h
#define TUINativePhotoPickerDelegate_Protocol_h
@import Foundation;

@protocol TUINativePhotoPickerDelegate

@required

/* required instance methods */
- (void)nativePhotoPicker:(id)picker didSelectAssets:(id)assets;

@optional

@end

#endif /* TUINativePhotoPickerDelegate_Protocol_h */
