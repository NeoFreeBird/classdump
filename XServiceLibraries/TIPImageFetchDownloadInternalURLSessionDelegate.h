//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPImageFetchDownloadInternalURLSessionDelegate_h
#define TIPImageFetchDownloadInternalURLSessionDelegate_h
@import Foundation;

#include "NSURLSessionDataDelegate-Protocol.h"

@class NSMapTable, NSObject, NSString;

@interface TIPImageFetchDownloadInternalURLSessionDelegate : NSObject <NSURLSessionDataDelegate> {
    /* instance variables */
    NSMapTable *_downloadContexts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)addDownload:(id)download;
- (void)removeDownloadWithTask:(id)task;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;

@end

#endif /* TIPImageFetchDownloadInternalURLSessionDelegate_h */
