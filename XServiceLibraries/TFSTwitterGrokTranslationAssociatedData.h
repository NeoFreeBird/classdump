//
#ifndef TFSTwitterGrokTranslationAssociatedData_h
#define TFSTwitterGrokTranslationAssociatedData_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSArray, NSObject;

@interface TFSTwitterGrokTranslationAssociatedData : NSObject <NSCoding> // (Swift)

@property (nonatomic, readonly) NSArray *pollTranslations;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)initWithPollTranslations:(id)translations;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterGrokTranslationAssociatedData_h */
