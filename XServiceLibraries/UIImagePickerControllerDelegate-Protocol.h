//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIImagePickerControllerDelegate_Protocol_h
#define UIImagePickerControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIImagePickerControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)imagePickerController:(id)controller didFinishPickingImage:(id)image editingInfo:(id)info;
- (void)imagePickerController:(id)controller didFinishPickingImage:(id)image editingInfo:(id)info;
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
- (void)imagePickerControllerDidCancel:(id)cancel;

@end

#endif /* UIImagePickerControllerDelegate_Protocol_h */
