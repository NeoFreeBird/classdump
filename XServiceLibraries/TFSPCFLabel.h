//
#ifndef TFSPCFLabel_h
#define TFSPCFLabel_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject, NSString;

@interface TFSPCFLabel : NSObject <NSCoding> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 value;
}

@property (nonatomic, readonly) NSString *profileLabelLocalizedString;
@property (nonatomic, readonly) NSString *valueLocalizedString;
@property (nonatomic, readonly) _Bool isOptedIn;

/* class methods */
+ (id)parody;
+ (id)commentary;
+ (id)fan;
+ (id)disable;
+ (id)allOptions;
+ (void)setAllOptions:(id)options;

/* instance methods */
- (id)initWithRawValue:(id)value;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSPCFLabel_h */
