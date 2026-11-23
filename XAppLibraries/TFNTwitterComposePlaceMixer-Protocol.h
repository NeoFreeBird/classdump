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
