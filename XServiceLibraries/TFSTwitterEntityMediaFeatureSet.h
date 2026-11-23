//
#ifndef TFSTwitterEntityMediaFeatureSet_h
#define TFSTwitterEntityMediaFeatureSet_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterEntityMediaFeatureSet : NSObject <NSCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) NSArray *faces;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterEntityMediaFeatureSet_h */
