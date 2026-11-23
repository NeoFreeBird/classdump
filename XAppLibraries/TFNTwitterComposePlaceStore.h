//
#ifndef TFNTwitterComposePlaceStore_h
#define TFNTwitterComposePlaceStore_h
@import Foundation;

#include "TFNTwitterComposePlaceMixer-Protocol.h"
#include "TFNTwitterPlaceFetcher-Protocol.h"
#include "TFNTwitterPlaceFetcherOperation-Protocol.h"

@class NSArray, NSObject, NSString, TFSTwitterLocation, TFSTwitterPlace;

@interface TFNTwitterComposePlaceStore : NSObject

@property (retain, nonatomic) id <TFNTwitterPlaceFetcher> placeFetcher;
@property (retain, nonatomic) id <TFNTwitterPlaceFetcherOperation> placeFetcherFetchOperation;
@property (retain, nonatomic) id <TFNTwitterPlaceFetcherOperation> placeFetcherSearchOperation;
@property (retain, nonatomic) id <TFNTwitterComposePlaceMixer> placeMixer;
@property (retain, nonatomic) TFSTwitterPlace *defaultPlace;
@property (copy, nonatomic) NSArray *attributions;
@property (copy, nonatomic) NSArray *fetchedPlaces;
@property (copy, nonatomic) NSArray *searchPlaces;
@property (nonatomic) _Bool searchPlacesActive;
@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) TFSTwitterPlace *selectedPlace;
@property (retain, nonatomic) TFSTwitterLocation *targetLocation;
@property (nonatomic) _Bool includePreciseLocation;
@property (nonatomic) _Bool includeLatLonParams;
@property (readonly, copy, nonatomic) NSArray *currentPlaces;
@property (copy, nonatomic) TFSTwitterPlace *audienceSelectionLocation;
@property (copy, nonatomic) NSArray *recentLocations;

/* instance methods */
- (id)init;
- (id)initWithPlaceFetcher:(id)fetcher placeMixer:(id)mixer includePreciseLocation:(_Bool)location includeLatLonParams:(_Bool)params accountID:(id)id;
- (void)saveRecentLocations:(id)locations;
- (void)saveRecentLocation:(id)location;
- (void)fetchPlacesWithAutoselect:(_Bool)autoselect cacheEnabled:(_Bool)enabled;
- (void)searchPlacesWithQuery:(id)query cacheEnabled:(_Bool)enabled;
- (id)_userInfoForTargetLocation:(id)location selectedPlace:(id)place error:(id)error;
- (id)_userInfoForTargetLocation:(id)location query:(id)query selectedPlace:(id)place places:(id)places defaultPlace:(id)place attributions:(id)attributions audienceSelectionLocation:(id)location;

@end

#endif /* TFNTwitterComposePlaceStore_h */
