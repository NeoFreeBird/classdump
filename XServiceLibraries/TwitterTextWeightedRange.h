//
#ifndef TwitterTextWeightedRange_h
#define TwitterTextWeightedRange_h
@import Foundation;

@class NSObject;

@interface TwitterTextWeightedRange : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) long long weight;

/* instance methods */
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range weight:(long long)weight;

@end

#endif /* TwitterTextWeightedRange_h */
