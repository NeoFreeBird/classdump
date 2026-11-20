//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterGrokAnnotation_h
#define TFSTwitterGrokAnnotation_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject;

@interface TFSTwitterGrokAnnotation : NSObject <NSCoding> // (Swift)

@property (nonatomic, readonly) _Bool isImageEditableByGrok;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)initWithIsImageEditableByGrok:(_Bool)grok;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterGrokAnnotation_h */
