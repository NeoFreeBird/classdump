//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLBackgroundURLSessionTaskOperationManager_h
#define TNLBackgroundURLSessionTaskOperationManager_h
@import Foundation;

#include "NSURLSessionDataDelegate-Protocol.h"
#include "NSURLSessionDownloadDelegate-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, NSURLSession;

@interface TNLBackgroundURLSessionTaskOperationManager : NSObject <NSURLSessionDownloadDelegate, NSURLSessionDataDelegate> {
    /* instance variables */
    NSURLSession *_URLSession;
    NSMutableDictionary *_contexts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)urlsession;
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession downloadTask:(id)task didFinishDownloadingToURL:(id)url;

@end

#endif /* TNLBackgroundURLSessionTaskOperationManager_h */
