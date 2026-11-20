//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GDTCORApplicationProtocol_Protocol_h
#define GDTCORApplicationProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GDTCORApplicationProtocol <NSObject>

@required

@property (readonly) _Bool isRunningInBackground;

/* required instance methods */
- (unsigned long long)beginBackgroundTaskWithName:(id)name expirationHandler:(id /* block */)handler;
- (void)endBackgroundTask:(unsigned long long)task;

@optional

@end

#endif /* GDTCORApplicationProtocol_Protocol_h */
