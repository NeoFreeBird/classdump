//
#ifndef TAVScribeThriftMediaErrorDetails_h
#define TAVScribeThriftMediaErrorDetails_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface TAVScribeThriftMediaErrorDetails : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSNumber *isFatal;
@property (readonly, copy, nonatomic) NSNumber *retryCount;

/* instance methods */
- (id)initWithCategory:(id)category message:(id)message isFatal:(id)fatal retryCount:(id)count;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)marshallerDictionary;

@end

#endif /* TAVScribeThriftMediaErrorDetails_h */
