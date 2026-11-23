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
