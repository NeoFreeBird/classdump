//
#ifndef TFSSpannedString_h
#define TFSSpannedString_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TFSStringSpanSequence.h"

@class NSObject, NSString;

@interface TFSSpannedString : NSObject <NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) TFSStringSpanSequence *spans;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (id)spannedStringWithString:(id)string options:(long long)options;
+ (id)spannedStringWithHTMLString:(id)htmlstring;
+ (id)spannedStringWithHTMLFormatString:(id)string;
+ (id)spannedStringWithHTMLTemplateString:(id)string;
+ (id)spannedStringWithFormatString:(id)string;
+ (id)spannedStringWithTemplateString:(id)string;
+ (id)parseHTMLString:(id)htmlstring enumeratingSpansWithBlock:(id /* block */)block;
+ (void)enumerateSpansInTemplateString:(id)string withBlock:(id /* block */)block;
+ (id)spansInTemplateString:(id)string;
+ (void)enumerateSpansInFormatString:(id)string withBlock:(id /* block */)block;
+ (id)spansInFormatString:(id)string;
+ (void)replaceVariableSpans:(id)spans addingUpdatedSpansToArray:(id)array replacingSubstringsWithBlock:(id /* block */)block;
+ (id)replacementStringForObject:(id)object;
+ (void)replaceVariableSpans:(id)spans inMutableString:(id)string addingUpdatedSpansToArray:(id)array withBlock:(id /* block */)block;
+ (void)replaceVariableSpans:(id)spans inMutableAttributedString:(id)string addingUpdatedSpansToArray:(id)array withBlock:(id /* block */)block;

/* instance methods */
- (id)init;
- (id)initWithString:(id)string spans:(id)spans;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToSpannedString:(id)string;
- (unsigned long long)hash;
- (id)replacingVariablesWithBlock:(id /* block */)block;
- (id)replacingVariablesWithDictionary:(id)dictionary;
- (id)replacingVariablesWithArray:(id)array;
- (id)renamingSpansWithBlock:(id /* block */)block;
- (id)renamingSpansWithDictionary:(id)dictionary;
- (id)substringsOfSpansOfType:(long long)type;
- (id)substringsFromVariableSpans;
- (id)substringFromSpan:(id)span;

@end

#endif /* TFSSpannedString_h */
