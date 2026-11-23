//
#ifndef TFSTwitterEntityTimestamp_h
#define TFSTwitterEntityTimestamp_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TFSTwitterTextRange-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface TFSTwitterEntityTimestamp : NSObject <NSCoding, TFSTwitterTextRange> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 codableEndSeconds;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) long long seconds;
@property (nonatomic, readonly) NSNumber *endSeconds;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range text:(id)text seconds:(long long)seconds;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range text:(id)text seconds:(long long)seconds endSeconds:(id)seconds;
- (_Bool)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)init;

@end

#endif /* TFSTwitterEntityTimestamp_h */
