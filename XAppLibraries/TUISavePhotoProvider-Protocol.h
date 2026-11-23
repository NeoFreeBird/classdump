//
#ifndef TUISavePhotoProvider_Protocol_h
#define TUISavePhotoProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUISavePhotoProvider <NSObject>

@required

@optional

/* optional instance methods */
- (void)getPhotoFilePath:(id /* block */)path;
- (void)getPhotoFileData:(id /* block */)data;
- (void)getPhotoImage:(id /* block */)image;

@end

#endif /* TUISavePhotoProvider_Protocol_h */
