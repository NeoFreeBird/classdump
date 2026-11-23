//
#ifndef TFSTwitterPlaceResponse_h
#define TFSTwitterPlaceResponse_h
@import Foundation;

#include "TFSTwitterPlace.h"

@class NSArray, NSObject;

@interface TFSTwitterPlaceResponse : NSObject // (Swift)

@property (nonatomic, readonly) NSArray *places;
@property (nonatomic, readonly) TFSTwitterPlace *defaultPlace;
@property (nonatomic, readonly) NSArray *attributions;

/* class methods */
+ (id)unifiedPlacesWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithPlaces:(id)places defaultPlace:(id)place;
- (id)init;

@end

#endif /* TFSTwitterPlaceResponse_h */
