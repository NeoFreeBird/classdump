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
