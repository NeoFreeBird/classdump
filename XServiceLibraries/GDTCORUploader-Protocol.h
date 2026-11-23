//
#ifndef GDTCORUploader_Protocol_h
#define GDTCORUploader_Protocol_h
@import Foundation;

#include "GDTCORLifecycleProtocol-Protocol.h"
#include "NSObject-Protocol.h"

@protocol GDTCORUploader <NSObject, GDTCORLifecycleProtocol>

@required

/* required instance methods */
- (void)uploadTarget:(long long)target withConditions:(long long)conditions;

@optional

@end

#endif /* GDTCORUploader_Protocol_h */
