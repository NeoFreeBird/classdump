//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterProfilePlaceStore_h
#define TFNTwitterProfilePlaceStore_h
@import Foundation;

#include "TFNTwitterAPIPlaceFetcher.h"
#include "TFNTwitterPlaceFetcherOperation-Protocol.h"

@class NSObject, TFSTwitterLocation;

@interface TFNTwitterProfilePlaceStore : NSObject

@property (retain, nonatomic) TFNTwitterAPIPlaceFetcher *placeFetcher;
@property (retain, nonatomic) id <TFNTwitterPlaceFetcherOperation> placeFetcherOperation;
@property (retain, nonatomic) TFSTwitterLocation *targetLocation;

/* instance methods */
- (id)init;
- (id)initWithPlaceFetcher:(id)fetcher;
- (void)fetchPlacesWithQuery:(id)query;

@end

#endif /* TFNTwitterProfilePlaceStore_h */
