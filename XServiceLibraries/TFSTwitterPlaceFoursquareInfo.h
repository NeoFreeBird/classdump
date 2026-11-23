//
#ifndef TFSTwitterPlaceFoursquareInfo_h
#define TFSTwitterPlaceFoursquareInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterPlaceFoursquareInfo : NSObject <NSCoding> // (Swift)

@property (nonatomic, readonly) NSString *venueId;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithVenueId:(id)id;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterPlaceFoursquareInfo_h */
