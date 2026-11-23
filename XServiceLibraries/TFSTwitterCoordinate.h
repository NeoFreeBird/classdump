//
#ifndef TFSTwitterCoordinate_h
#define TFSTwitterCoordinate_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSObject;

@interface TFSTwitterCoordinate : NSObject <NSSecureCoding> // (Swift)

@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (void)setSupportsSecureCoding:(_Bool)coding;

/* instance methods */
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;
- (_Bool)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterCoordinate_h */
