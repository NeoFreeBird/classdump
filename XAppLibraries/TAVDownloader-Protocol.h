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
