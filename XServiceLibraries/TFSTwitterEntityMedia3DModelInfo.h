//
#ifndef TFSTwitterEntityMedia3DModelInfo_h
#define TFSTwitterEntityMedia3DModelInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject;

@interface TFSTwitterEntityMedia3DModelInfo : NSObject <NSCoding> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 assets;
}

/* instance methods */
- (id)initWithAssets:(id)assets;
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterEntityMedia3DModelInfo_h */
