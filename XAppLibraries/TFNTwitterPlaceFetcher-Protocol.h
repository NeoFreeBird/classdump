//
#ifndef TFNTwitterPlaceFetcher_Protocol_h
#define TFNTwitterPlaceFetcher_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterPlaceFetcher <NSObject>

@required

/* required instance methods */
- (id)fetchPlacesWithLocation:(id)location queryType:(long long)type includeLatLonParams:(_Bool)params response:(id /* block */)response;
- (id)searchPlacesWithLocation:(id)location query:(id)query queryType:(long long)type response:(id /* block */)response;

@optional

@end

#endif /* TFNTwitterPlaceFetcher_Protocol_h */
