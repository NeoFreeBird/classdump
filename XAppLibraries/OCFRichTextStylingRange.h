//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFRichTextStylingRange_h
#define OCFRichTextStylingRange_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "OCFRichTextExpandableRange-Protocol.h"

@class NSObject, NSString;

@interface OCFRichTextStylingRange : NSObject <OCFRichTextExpandableRange, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeValue;
@property (readonly, nonatomic) long long fontSize;
@property (readonly, nonatomic) long long fontStyle;
@property (readonly, nonatomic) long long color;

/* instance methods */
- (void)addAttributesToAttributedString:(id)string;
- (void)updateWithExpandedRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value inText:(id)text;
- (id)expansionReplacedTextForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range inText:(id)text withSubtaskDataProvider:(id)provider;
- (id)expansionPrefixForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range inText:(id)text;
- (id)expansionSuffixForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range inText:(id)text;
- (_Bool)expansionReplacesText;
- (_Bool)expansionPrefixesText;
- (_Bool)expansionSuffixesText;
- (_Bool)expansionRemovesRange;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value type:(long long)type fontSize:(long long)size fontStyle:(long long)style color:(long long)color;
- (void)updateWithRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFRichTextStylingRange_h */
