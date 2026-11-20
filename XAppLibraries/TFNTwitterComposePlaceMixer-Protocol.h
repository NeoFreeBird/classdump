//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterComposePlaceMixer_Protocol_h
#define TFNTwitterComposePlaceMixer_Protocol_h
@import Foundation;

@protocol TFNTwitterComposePlaceMixer

@required

/* required instance methods */
- (id)mixPlaces:(id)places selectedPlace:(id)place query:(id)query;

@optional

@end

#endif /* TFNTwitterComposePlaceMixer_Protocol_h */
