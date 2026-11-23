//
#ifndef TFSTwitterAPIAmplifyMarketplaceVideosPostCommand_h
#define TFSTwitterAPIAmplifyMarketplaceVideosPostCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSArray, NSString;

@interface TFSTwitterAPIAmplifyMarketplaceVideosPostCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (copy, nonatomic) NSString *mediaID;
@property (nonatomic) _Bool monetize;
@property (copy, nonatomic) NSArray *videoCategories;
@property (copy, nonatomic) NSArray *excludedAdvertisers;
@property (copy, nonatomic) NSArray *excludedMonetizationCategories;
@property (copy, nonatomic) NSArray *excludedAdsCategories;

/* instance methods */
- (id)initWithAccountID:(id)id mediaID:(id)id monetize:(_Bool)monetize videoCategories:(id)categories excludedAdvertisers:(id)advertisers excludedMonetizationCategories:(id)categories excludedAdsCategories:(id)categories context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAmplifyMarketplaceVideosPostCommand_h */
