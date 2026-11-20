//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFRichTextEntity_h
#define OCFRichTextEntity_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFRichTextExpandableRange-Protocol.h"
#include "OCFSubtaskDataReference.h"
#include "TFSActiveTextRange-Protocol.h"

@class NSObject, NSString;

@interface OCFRichTextEntity : NSObject <OCFRichTextExpandableRange, TFSActiveTextRange>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) OCFNavigationLink *navigationLink;
@property (readonly, nonatomic) OCFSubtaskDataReference *subtaskDataReference;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeValue;
@property (readonly, nonatomic) long long rangeFlavor;
@property (readonly, copy, nonatomic) NSString *displayString;
@property (readonly, nonatomic) _Bool isRangeLink;
@property (nonatomic) long long itemIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)updateWithExpandedRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value inText:(id)text;
- (id)expansionReplacedTextForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range inText:(id)text withSubtaskDataProvider:(id)provider;
- (id)expansionPrefixForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range inText:(id)text;
- (id)expansionSuffixForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range inText:(id)text;
- (_Bool)expansionReplacesText;
- (_Bool)expansionPrefixesText;
- (_Bool)expansionSuffixesText;
- (_Bool)expansionRemovesRange;
- (id)initWithJSONDictionary:(id)jsondictionary fullText:(id)text error:(id *)error;
- (id)initWithRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value displayString:(id)string navigationLink:(id)link subtaskDataReference:(id)reference;
- (void)updateWithRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value displayString:(id)string;
- (id)activeTextRangeWithRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFRichTextEntity_h */
