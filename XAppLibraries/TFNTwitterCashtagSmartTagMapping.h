//
#ifndef TFNTwitterCashtagSmartTagMapping_h
#define TFNTwitterCashtagSmartTagMapping_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterCashtagSmartTagMapping : NSObject <NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *ticker;
@property (readonly, copy, nonatomic) NSString *smartTag;
@property (nonatomic) unsigned long long insertionOffset;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithTicker:(id)ticker smartTag:(id)tag insertionOffset:(unsigned long long)offset;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* TFNTwitterCashtagSmartTagMapping_h */
