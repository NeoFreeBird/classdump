//
#ifndef TFSNoteTweetRichTextTag_h
#define TFSNoteTweetRichTextTag_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSArray, NSObject;

@interface TFSNoteTweetRichTextTag : NSObject <NSCoding> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 types;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic, readonly) NSArray *wrappedTypes;

/* class methods */
+ (void)setKeyedArchiverClassFor:(id)_for;

/* instance methods */
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range types:(id)types;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSNoteTweetRichTextTag_h */
