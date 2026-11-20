//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TVPDownloader_h
#define TVPDownloader_h
@import Foundation;

#include "TAVDownloader-Protocol.h"

@class NSObject, NSString;

@interface TVPDownloader : NSObject <TAVDownloader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)downloadURL:(id)url completion:(id /* block */)completion;
- (void)downloadWithURLRequest:(id)urlrequest completion:(id /* block */)completion;

@end

#endif /* TVPDownloader_h */
