//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNWindowFeaturesProvider_Protocol_h
#define TFNWindowFeaturesProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UITraitCollection;

@protocol TFNWindowFeaturesProvider <NSObject>

@required

@property (readonly, nonatomic) UITraitCollection *effectiveWindowTraitCollection;
@property (copy, nonatomic) id /* block */ windowWillTransitionToSize;

@optional

@end

#endif /* TFNWindowFeaturesProvider_Protocol_h */
