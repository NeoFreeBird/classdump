//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
