//
#ifndef TUISavePhotoImageProvider_h
#define TUISavePhotoImageProvider_h
@import Foundation;

#include "TUISavePhotoProvider-Protocol.h"

@class NSObject, NSString, UIImage;

@interface TUISavePhotoImageProvider : NSObject <TUISavePhotoProvider> {
    /* instance variables */
    UIImage *_image;
    NSString *_fileType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithImage:(id)image fileType:(id)type;
- (void)getPhotoImage:(id /* block */)image;

@end

#endif /* TUISavePhotoImageProvider_h */
