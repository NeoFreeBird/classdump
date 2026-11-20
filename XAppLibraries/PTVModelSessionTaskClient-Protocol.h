//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVModelSessionTaskClient_Protocol_h
#define PTVModelSessionTaskClient_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVModelSessionTaskClient <NSObject>

@required

/* required instance methods */
- (void)ptv_task:(id)ptv_task didCompleteWithResponse:(id)response data:(id)data error:(id)error bytesSent:(long long)sent bytesReceived:(long long)received;

@optional

@end

#endif /* PTVModelSessionTaskClient_Protocol_h */
