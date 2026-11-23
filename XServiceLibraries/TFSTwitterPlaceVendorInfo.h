//
#ifndef TFSTwitterPlaceVendorInfo_h
#define TFSTwitterPlaceVendorInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "TFSTwitterPlaceFoursquareInfo.h"
#include "TFSTwitterPlaceYelpInfo.h"

@class NSObject, NSString;

@interface TFSTwitterPlaceVendorInfo : NSObject <NSSecureCoding> // (Swift)

@property (nonatomic, readonly) TFSTwitterPlaceFoursquareInfo *foursquareInfo;
@property (nonatomic, readonly) TFSTwitterPlaceYelpInfo *yelpInfo;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (void)setSupportsSecureCoding:(_Bool)coding;

/* instance methods */
- (id)initWithFoursquareInfo:(id)info yelpInfo:(id)info;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterPlaceVendorInfo_h */
