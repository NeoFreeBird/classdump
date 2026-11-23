//
#ifndef _TtCV10TFNUISwift15ImagePickerView11Coordinator_h
#define _TtCV10TFNUISwift15ImagePickerView11Coordinator_h
@import Foundation;

#include "UIImagePickerControllerDelegate-Protocol.h"
#include "UINavigationControllerDelegate-Protocol.h"

@class NSObject, TFNUISwift.ImagePickerView;

@interface TFNUISwift.ImagePickerView.Coordinator : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate> { // (Swift)
    /* instance variables */
    TFNUISwift.ImagePickerView parent;
}

/* instance methods */
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
- (void)imagePickerControllerDidCancel:(id)cancel;
- (id)init;

@end

#endif /* _TtCV10TFNUISwift15ImagePickerView11Coordinator_h */
