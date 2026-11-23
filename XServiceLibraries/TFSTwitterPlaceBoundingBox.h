//
#ifndef TFSTwitterPlaceBoundingBox_h
#define TFSTwitterPlaceBoundingBox_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterPlaceBoundingBox : NSObject <NSSecureCoding> // (Swift)

@property (nonatomic, readonly) NSArray *coordinates;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *description;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (void)setSupportsSecureCoding:(_Bool)coding;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)initWithCoordinates:(id)coordinates type:(long long)type;
- (id)initWithTwitterCoordinates:(id)coordinates type:(long long)type;
- (_Bool)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterPlaceBoundingBox_h */
