//
#ifndef TFSTwitterSensitiveMediaWarning_h
#define TFSTwitterSensitiveMediaWarning_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterSensitiveMediaWarning : NSObject <NSCoding, NSCopying> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 adultContent;
    B24@0:8@"NSString"16 graphicViolence;
    B24@0:8@"NSString"16 other;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)hasAnyWarning;
- (id)copyWithZone:(void *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterSensitiveMediaWarning_h */
