//
#ifndef TNUSimpleDownloadInternal_h
#define TNUSimpleDownloadInternal_h
@import Foundation;

#include "TNLRequestEventHandler-Protocol.h"
#include "TNLRequestOperation.h"
#include "TNUSimpleDownload-Protocol.h"

@class NSObject, NSString, NSURL;
@protocol TNUSimpleDownloadDelegate;

@interface TNUSimpleDownloadInternal : NSObject <TNUSimpleDownload, TNLRequestEventHandler> {
    /* instance variables */
    _Bool _done;
    id /* block */ _completionBlock;
    long long _operationId;
}

@property (readonly, copy, nonatomic) NSString *fileIdentifier;
@property (readonly, nonatomic) TNLRequestOperation *underlyingOperation;
@property (readonly, copy, nonatomic) NSString *downloadId;
@property (readonly, copy, nonatomic) NSURL *downloadURL;
@property (weak, nonatomic) id <TNUSimpleDownloadDelegate> delegate;
@property (readonly, nonatomic) float downloadProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDownloadURL:(id)url completionBlock:(id /* block */)block;
- (void)startWithUnderlyingOperation:(id)operation;
- (void)completeWithFileURL:(id)url error:(id)error;
- (void)cancelWithSource:(id)source;
- (void)tnl_requestOperation:(id)operation didUpdateDownloadProgress:(float)progress;

@end

#endif /* TNUSimpleDownloadInternal_h */
