//
#ifndef TFSCompositionAIGeneratedDisclosure_h
#define TFSCompositionAIGeneratedDisclosure_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFSCompositionAIGeneratedDisclosure : NSObject <NSCoding, NSCopying> // (Swift)

@property (nonatomic) _Bool hasAIGeneratedMedia;
@property (nonatomic) long long detectionSource;
@property (nonatomic) _Bool canEdit;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)userDeclared;
+ (id)c2paClientDetected;
+ (id)grokSignatureDetected;

/* instance methods */
- (id)initWithHasAIGeneratedMedia:(_Bool)media detectionSource:(long long)source canEdit:(_Bool)edit;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSCompositionAIGeneratedDisclosure_h */
