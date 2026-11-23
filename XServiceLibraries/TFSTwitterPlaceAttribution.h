//
#ifndef TFSTwitterPlaceAttribution_h
#define TFSTwitterPlaceAttribution_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterPlaceAttribution : NSObject

@property (readonly, nonatomic) NSString *normalizedName;

/* class methods */
+ (id)placeAttributionWithKey:(id)key;

/* instance methods */
- (id)initInternal;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)description;
- (id)vectorImageBannerName;

@end

#endif /* TFSTwitterPlaceAttribution_h */
