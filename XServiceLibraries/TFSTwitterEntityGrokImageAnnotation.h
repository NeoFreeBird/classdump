//
#ifndef TFSTwitterEntityGrokImageAnnotation_h
#define TFSTwitterEntityGrokImageAnnotation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterEntityGrokImageAnnotation : NSObject <NSCopying, NSSecureCoding> // (Swift)

@property (nonatomic, readonly) NSString *prompt;
@property (nonatomic, readonly) NSString *upsampledPrompt;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (void)setSupportsSecureCoding:(_Bool)coding;

/* instance methods */
- (id)initWithPrompt:(id)prompt upsampledPrompt:(id)prompt;
- (id)copyWithZone:(void *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterEntityGrokImageAnnotation_h */
