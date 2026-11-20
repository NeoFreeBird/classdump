//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XApiHostMapping_Protocol_h
#define XApiHostMapping_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol XApiHostMapping <NSObject>

@required

/* required instance methods */
- (void)mapHostForRequest:(id)request completion:(id /* block */)completion;
- (id)unmappedHostForHost:(id)host;
- (void)didCompleteRequestToURL:(id)url statusCode:(long long)code error:(id)error;

@optional

@end

#endif /* XApiHostMapping_Protocol_h */
