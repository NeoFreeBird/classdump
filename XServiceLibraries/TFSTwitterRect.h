//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterRect_h
#define TFSTwitterRect_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterRect : NSObject <NSCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)init;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)JSONDictionaryValue;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;

@end

#endif /* TFSTwitterRect_h */
