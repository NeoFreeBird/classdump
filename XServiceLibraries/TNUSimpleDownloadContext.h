//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUSimpleDownloadContext_h
#define TNUSimpleDownloadContext_h
@import Foundation;

#include "TNLRequestOperation.h"
#include "TNUSimpleDownloadRequestDelegate.h"

@class NSArray, NSMutableArray, NSObject, NSString;

@interface TNUSimpleDownloadContext : NSObject {
    /* instance variables */
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _downloadsLock;
}

@property (readonly, copy, nonatomic) NSString *fileIdentifier;
@property (readonly, nonatomic) TNLRequestOperation *owner;
@property (readonly, nonatomic) TNUSimpleDownloadRequestDelegate *requestCallbackHolder;
@property (readonly, copy, nonatomic) NSArray *downloads;

/* instance methods */
- (id)initWithFileIdentifier:(id)identifier download:(id)download owner:(id)owner requestCallbackHolder:(id)holder;
- (void)addDownload:(id)download;
- (void)cancelDownload:(id)download source:(id)source;
- (void)completeAllDownloadsWithFileURL:(id)url error:(id)error;
- (void)cancelAllDownloadsWithSource:(id)source;

@end

#endif /* TNUSimpleDownloadContext_h */
