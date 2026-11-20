//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterCardRuntimeProvider_Protocol_h
#define TFSTwitterCardRuntimeProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterCardRuntime-Protocol.h"

@protocol TFSTwitterCardRuntimeProvider <NSObject>

@required

@property (readonly, nonatomic) id <TFSTwitterCardRuntime> cardRuntime;

@optional

@end

#endif /* TFSTwitterCardRuntimeProvider_Protocol_h */
