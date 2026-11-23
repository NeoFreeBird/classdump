//
#ifndef TwitterTextParseResults_h
#define TwitterTextParseResults_h
@import Foundation;

@class NSObject;

@interface TwitterTextParseResults : NSObject

@property (readonly, nonatomic) long long weightedLength;
@property (readonly, nonatomic) long long permillage;
@property (readonly, nonatomic) _Bool isValid;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } displayTextRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } validDisplayTextRange;

/* instance methods */
- (id)initWithWeightedLength:(long long)length permillage:(long long)permillage valid:(_Bool)valid displayRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range validRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)description;

@end

#endif /* TwitterTextParseResults_h */
