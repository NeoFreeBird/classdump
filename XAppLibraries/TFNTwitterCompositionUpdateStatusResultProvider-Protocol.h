//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCompositionUpdateStatusResultProvider_Protocol_h
#define TFNTwitterCompositionUpdateStatusResultProvider_Protocol_h
@import Foundation;

#include "TAPTwitterCompositionTweetPerspective-Protocol.h"

@protocol TFNTwitterCompositionUpdateStatusResultProvider

@required

@property (readonly) id <TAPTwitterCompositionTweetPerspective> resultStatus;

@optional

@end

#endif /* TFNTwitterCompositionUpdateStatusResultProvider_Protocol_h */
