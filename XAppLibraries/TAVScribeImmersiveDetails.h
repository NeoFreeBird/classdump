//
#ifndef TAVScribeImmersiveDetails_h
#define TAVScribeImmersiveDetails_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface TAVScribeImmersiveDetails : NSObject <NSCopying>

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSNumber *sessionCardIndex;

/* instance methods */
- (id)initWithSessionId:(id)id sessionCardIndex:(id)index;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)marshallerDictionary;
- (id)sessionMarshallerDictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVScribeImmersiveDetails_h */
