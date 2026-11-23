//
#ifndef TFSTwitterProfessionalCategory_h
#define TFSTwitterProfessionalCategory_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterProfessionalCategory : NSObject <NSCopying> // (Swift)

@property (nonatomic, readonly) long long categoryId;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _Bool display;

/* class methods */
+ (id)categoriesFromJsonDictionaryArray:(id)array;

/* instance methods */
- (id)copyWithZone:(void *)zone;
- (id)initWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterProfessionalCategory_h */
