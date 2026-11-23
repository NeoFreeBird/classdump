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
