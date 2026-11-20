//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFCRuntimeProvider_h
#define TFCRuntimeProvider_h
@import Foundation;

#include "TFSTwitterCardRuntime-Protocol.h"
#include "TFSTwitterCardRuntimeProvider-Protocol.h"

@class NSObject, NSString;

@interface TFCRuntimeProvider : NSObject <TFSTwitterCardRuntimeProvider>

@property (readonly, nonatomic) id <TFSTwitterCardRuntime> cardRuntime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

#endif /* TFCRuntimeProvider_h */
