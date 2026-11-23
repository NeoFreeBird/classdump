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
