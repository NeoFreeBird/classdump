//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterCardRuntime_Protocol_h
#define TFSTwitterCardRuntime_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TFSTwitterCardRuntime <NSObject>

@required

@property (readonly, nonatomic) NSString *platformIdentifier;

@optional

@end

#endif /* TFSTwitterCardRuntime_Protocol_h */
