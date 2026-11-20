//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUISavePhotoDataProvider_h
#define TUISavePhotoDataProvider_h
@import Foundation;

#include "TUISavePhotoProvider-Protocol.h"

@class NSData, NSObject, NSString;

@interface TUISavePhotoDataProvider : NSObject <TUISavePhotoProvider> {
    /* instance variables */
    NSData *_data;
    NSString *_fileExtension;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithData:(id)data fileExtension:(id)extension;
- (void)getPhotoFileData:(id /* block */)data;

@end

#endif /* TUISavePhotoDataProvider_h */
