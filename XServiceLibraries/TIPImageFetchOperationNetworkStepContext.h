//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPImageFetchOperationNetworkStepContext_h
#define TIPImageFetchOperationNetworkStepContext_h
@import Foundation;

#include "TIPImageFetchDownloadRequest.h"

@class NSObject;
@protocol OS_dispatch_queue, TIPImageDownloadContext;

@interface TIPImageFetchOperationNetworkStepContext : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_stateQueue;
    id <TIPImageDownloadContext> _imageDownloadContext;
    TIPImageFetchDownloadRequest *_imageDownloadRequest;
}

/* instance methods */
- (id)init;
- (void)assignDownloadImageContextWithBlock:(id /* block */)block;

@end

#endif /* TIPImageFetchOperationNetworkStepContext_h */
