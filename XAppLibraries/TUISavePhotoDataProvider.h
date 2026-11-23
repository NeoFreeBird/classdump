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
