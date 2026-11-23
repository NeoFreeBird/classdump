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
