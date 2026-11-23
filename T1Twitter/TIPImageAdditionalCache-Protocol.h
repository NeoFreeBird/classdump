//
#ifndef TIPImageAdditionalCache_Protocol_h
#define TIPImageAdditionalCache_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImageAdditionalCache <NSObject>

@required

@optional

/* optional instance methods */
- (void)tip_retrieveImageForURL:(id)url completion:(id /* block */)completion;
- (void)tip_retrieveImageForURL:(id)url completion:(id /* block */)completion;

@end

#endif /* TIPImageAdditionalCache_Protocol_h */
