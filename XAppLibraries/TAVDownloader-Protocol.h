//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVDownloader_Protocol_h
#define TAVDownloader_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TAVDownloader <NSObject>

@required

/* required instance methods */
- (void)downloadURL:(id)url completion:(id /* block */)completion;
- (void)downloadWithURLRequest:(id)urlrequest completion:(id /* block */)completion;

@optional

@end

#endif /* TAVDownloader_Protocol_h */
