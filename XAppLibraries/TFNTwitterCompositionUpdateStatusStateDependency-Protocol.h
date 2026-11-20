//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCompositionUpdateStatusStateDependency_Protocol_h
#define TFNTwitterCompositionUpdateStatusStateDependency_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSError;

@protocol TFNTwitterCompositionUpdateStatusStateDependency <NSObject>

@required

@property unsigned long long updateStatusState;
@property (retain) NSError *updateStatusError;

@optional

@end

#endif /* TFNTwitterCompositionUpdateStatusStateDependency_Protocol_h */
