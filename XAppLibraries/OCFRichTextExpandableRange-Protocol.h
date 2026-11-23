//
#ifndef OCFRichTextExpandableRange_Protocol_h
#define OCFRichTextExpandableRange_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@protocol OCFRichTextExpandableRange <NSObject, NSCopying>

@required

/* required instance methods */
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeValue;
- (_Bool)expansionReplacesText;
- (_Bool)expansionPrefixesText;
- (_Bool)expansionSuffixesText;
- (_Bool)expansionRemovesRange;
- (void)updateWithExpandedRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value inText:(id)text;
- (id)expansionPrefixForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range inText:(id)text;
- (id)expansionSuffixForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range inText:(id)text;
- (id)expansionReplacedTextForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range inText:(id)text withSubtaskDataProvider:(id)provider;

@optional

@end

#endif /* OCFRichTextExpandableRange_Protocol_h */
