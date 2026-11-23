//
#ifndef GDTCORProductData_h
#define GDTCORProductData_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSObject;

@interface GDTCORProductData : NSObject <NSCopying, NSSecureCoding>

@property (readonly, nonatomic) int productID;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithProductID:(int)id;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqualToProductData:(id)data;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* GDTCORProductData_h */
