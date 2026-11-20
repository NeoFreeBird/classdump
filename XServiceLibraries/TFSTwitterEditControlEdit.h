//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEditControlEdit_h
#define TFSTwitterEditControlEdit_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TFSTwitterEditControlInitial.h"

@class NSObject;

@interface TFSTwitterEditControlEdit : NSObject <NSCoding, NSCopying, NSSecureCoding> // (Swift)

@property (nonatomic, readonly) TFSTwitterEditControlInitial *editControlInitial;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithEditControlInitial:(id)initial;
- (id)init;

@end

#endif /* TFSTwitterEditControlEdit_h */
