//
#ifndef TFSTwitterFoundMediaProvider_h
#define TFSTwitterFoundMediaProvider_h
@import Foundation;

#include "TFSTwitterFoundMediaImage.h"

@class NSObject, NSString;

@interface TFSTwitterFoundMediaProvider : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) TFSTwitterFoundMediaImage *iconImage;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier displayName:(id)name iconImage:(id)image;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFSTwitterFoundMediaProvider_h */
