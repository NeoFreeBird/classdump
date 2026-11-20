//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterSimplePlaceMixer_h
#define TFNTwitterSimplePlaceMixer_h
@import Foundation;

#include "TFNTwitterComposePlaceMixer-Protocol.h"

@class NSObject;

@interface TFNTwitterSimplePlaceMixer : NSObject <TFNTwitterComposePlaceMixer>

/* instance methods */
- (id)mixPlaces:(id)places selectedPlace:(id)place query:(id)query;

@end

#endif /* TFNTwitterSimplePlaceMixer_h */
