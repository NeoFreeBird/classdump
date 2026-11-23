//
#ifndef TIPImageFetchDownloadClient_Protocol_h
#define TIPImageFetchDownloadClient_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImageFetchDownloadClient <NSObject>

@required

/* required instance methods */
- (void)imageFetchDownloadDidStart:(id)start;
- (void)imageFetchDownload:(id)download hydrateRequest:(id)request completion:(id /* block */)completion;
- (void)imageFetchDownload:(id)download authorizeRequest:(id)request completion:(id /* block */)completion;
- (void)imageFetchDownload:(id)download didReceiveURLResponse:(id)urlresponse;
- (void)imageFetchDownload:(id)download didReceiveData:(id)data;
- (void)imageFetchDownloadWillRetry:(id)retry;
- (void)imageFetchDownload:(id)download didCompleteWithError:(id)error;

@optional

@end

#endif /* TIPImageFetchDownloadClient_Protocol_h */
