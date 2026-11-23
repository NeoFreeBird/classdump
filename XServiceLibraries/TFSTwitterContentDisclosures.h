//
#ifndef TFSTwitterContentDisclosures_h
#define TFSTwitterContentDisclosures_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject;

@interface TFSTwitterContentDisclosures : NSObject <NSCoding> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 wrapped;
}

@property (nonatomic, readonly) _Bool hasPaidPromotionDisclosure;
@property (nonatomic, readonly) _Bool hasAIGeneratedDisclosure;
@property (nonatomic, readonly) _Bool hasAnyDisclosure;
@property (nonatomic, readonly) long long aiGeneratedDetectionSource;
@property (nonatomic, readonly) _Bool canEditAIGeneratedDisclosure;

/* instance methods */
- (id)initWithHasPaidPromotionDisclosure:(_Bool)disclosure hasAIGeneratedDisclosure:(_Bool)disclosure aiGeneratedDetectionSource:(long long)source canEditAIGeneratedDisclosure:(_Bool)disclosure;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterContentDisclosures_h */
