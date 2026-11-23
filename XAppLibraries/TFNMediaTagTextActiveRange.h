//
#ifndef TFNMediaTagTextActiveRange_h
#define TFNMediaTagTextActiveRange_h
@import Foundation;

@class TFSFlavoredRange, TFSTwitterTagSet;

@interface TFNMediaTagTextActiveRange : TFSFlavoredRange

@property (readonly, nonatomic) TFSTwitterTagSet *tagSet;

/* instance methods */
- (id)initWithRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value rangeFlavor:(long long)flavor displayString:(id)string;
- (id)initWithTagSet:(id)set displayString:(id)string displayRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFNMediaTagTextActiveRange_h */
