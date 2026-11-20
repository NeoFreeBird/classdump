//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAccountFeatureSwitchAccess_Protocol_h
#define TFSTwitterAccountFeatureSwitchAccess_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"

@protocol TFSTwitterAccountFeatureSwitchAccess <NSObject>

@required

@property (nonatomic, readonly) id <TPSFeatureSwitchesAccess> featureSwitches;

@optional

@end

#endif /* TFSTwitterAccountFeatureSwitchAccess_Protocol_h */
