//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCompositionUpdateStatusDependency_Protocol_h
#define TFNTwitterCompositionUpdateStatusDependency_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TAPTwitterCompositionTweetPerspective-Protocol.h"

@protocol TFNTwitterCompositionUpdateStatusDependency <NSObject>

@required

@property (retain) id <TAPTwitterCompositionTweetPerspective> status;

@optional

@end

#endif /* TFNTwitterCompositionUpdateStatusDependency_Protocol_h */
