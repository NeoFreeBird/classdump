//
#ifndef TFSTwitterEntityMediaVideoVariant_h
#define TFSTwitterEntityMediaVideoVariant_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterEntityMediaVideoVariant : NSObject <NSSecureCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) long long bitrate;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithUrl:(id)url contentType:(id)type bitrate:(long long)bitrate;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (id)init;

@end

#endif /* TFSTwitterEntityMediaVideoVariant_h */
