//
#ifndef TFNTwitterAPIPlaceFetcher_h
#define TFNTwitterAPIPlaceFetcher_h
@import Foundation;

#include "TFNTwitterPlaceFetcher-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterAPIPlaceFetcher : NSObject <TFNTwitterPlaceFetcher>

@property (copy, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSString *osVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAccountID:(id)id;
- (id)fetchPlacesWithLocation:(id)location queryType:(long long)type includeLatLonParams:(_Bool)params response:(id /* block */)response;
- (id)searchPlacesWithLocation:(id)location query:(id)query queryType:(long long)type response:(id /* block */)response;

@end

#endif /* TFNTwitterAPIPlaceFetcher_h */
