//
#ifndef TAVURLSessionDownloader_h
#define TAVURLSessionDownloader_h
@import Foundation;

#include "TAVDownloader-Protocol.h"

@class NSObject, NSString;

@interface TAVURLSessionDownloader : NSObject <TAVDownloader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)downloadURL:(id)url completion:(id /* block */)completion;
- (void)downloadWithURLRequest:(id)urlrequest completion:(id /* block */)completion;

@end

#endif /* TAVURLSessionDownloader_h */
