//
#ifndef OCFRichTextProcessor_h
#define OCFRichTextProcessor_h
@import Foundation;

#include "OCFRichTextExpander-Protocol.h"

@class NSObject;

@interface OCFRichTextProcessor : NSObject <OCFRichTextExpander>

/* class methods */
+ (id)sharedProcessor;

/* instance methods */
- (id)attributedStringForExpandedRichText:(id)text font:(id)font color:(id)color activeRangesFont:(id)font textAlignment:(long long)alignment lineBreakMode:(long long)mode;
- (id)expandRichText:(id)text withSubtaskDataProvider:(id)provider;
- (id)private_reverseSortedExpandableRanges:(id)ranges;

@end

#endif /* OCFRichTextProcessor_h */
