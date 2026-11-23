//
#ifndef TFSTwitterUnifiedCard_h
#define TFSTwitterUnifiedCard_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterUnifiedCard : NSObject <NSCoding> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 cardUri;
    B24@0:8@"NSString"16 layout;
    B24@0:8@"NSString"16 cardType;
    B24@0:8@"NSString"16 displayOptions;
    B24@0:8@"NSString"16 experimentSignals;
}

@property (nonatomic, readonly) NSString *unifiedCardID;
@property (nonatomic, readonly) NSString *cardTypeString;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterUnifiedCard_h */
