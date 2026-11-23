//
#ifndef TFSTwitterVideoMonetizationSettings_h
#define TFSTwitterVideoMonetizationSettings_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterVideoMonetizationSettings : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) NSArray *excludedAdvertisers;
@property (copy, nonatomic) NSArray *excludedMonetizationCategories;
@property (copy, nonatomic) NSArray *excludedAdsCategories;
@property (copy, nonatomic) NSString *mediaID;
@property (nonatomic) _Bool monetize;
@property (copy, nonatomic) NSArray *videoCategories;

/* class methods */
+ (id)videoMonetizationSettingsWithJSONData:(id)jsondata error:(out id *)error;

/* instance methods */
- (id)init;
- (id)initWithMediaId:(id)id excludedAdvertisers:(id)advertisers excludedMonetizationCategories:(id)categories excludedAdsCategories:(id)categories monetize:(_Bool)monetize videoCategories:(id)categories;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSTwitterVideoMonetizationSettings_h */
