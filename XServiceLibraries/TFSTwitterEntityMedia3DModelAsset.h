//
#ifndef TFSTwitterEntityMedia3DModelAsset_h
#define TFSTwitterEntityMedia3DModelAsset_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject;

@interface TFSTwitterEntityMedia3DModelAsset : NSObject <NSCoding> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 url;
    B24@0:8@"NSString"16 contentType;
}

/* instance methods */
- (id)initWithUrl:(id)url contentType:(id)type;
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterEntityMedia3DModelAsset_h */
