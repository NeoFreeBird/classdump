//
#ifndef TIPImageDownloader_h
#define TIPImageDownloader_h
@import Foundation;

#include "TIPImageFetchDownloadClient-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TIPImageDownloader : NSObject <TIPImageFetchDownloadClient> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_downloaderQueue;
    NSMutableDictionary *_constructedDownloads;
    NSMutableArray *_pendingDownloads;
    unsigned long long _runningDownloadsCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initInternal;
- (void)imageFetchDownloadDidStart:(id)start;
- (void)imageFetchDownload:(id)download didReceiveURLResponse:(id)urlresponse;
- (void)imageFetchDownload:(id)download didReceiveData:(id)data;
- (void)imageFetchDownload:(id)download hydrateRequest:(id)request completion:(id /* block */)completion;
- (void)imageFetchDownload:(id)download authorizeRequest:(id)request completion:(id /* block */)completion;
- (void)imageFetchDownloadWillRetry:(id)retry;
- (void)imageFetchDownload:(id)download didCompleteWithError:(id)error;

@end

#endif /* TIPImageDownloader_h */
