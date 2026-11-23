//
#ifndef NSAttributedString_TFSAdditions_h
#define NSAttributedString_TFSAdditions_h
@import Foundation;

@interface NSAttributedString (TFSAdditions)

/* class methods */
+ (id)attributedStringWithHashflagForHashtag:(id)hashtag font:(id)font;
+ (id)attributedStringWithHashtag:(id)hashtag hashflagImage:(id)image font:(id)font;
+ (id)tfnUIKitSafeParagraphStyle:(id)style;
+ (id)tfnUIKitSafeFont:(id)font;
+ (id)attributedStringByJoiningComponents:(id)components withJoiningString:(id)string;
+ (id)localizedAttributedString:(id)string standardAttributes:(id)attributes delimiterAttributes:(id)attributes;
+ (id)delimiterSubstringComponentsFromLocalizedString:(id)string;
+ (_Bool)stringContainsDelimiter:(id)delimiter;

/* instance methods */
- (id)tfn_dynamicAttributedStringForObject:(id)object;
- (_Bool)tfn_hasDynamicAttributesForObject:(id)object;
- (_Bool)_tfn_hasDynamicAttributesWithNewValues:(_Bool)values forObject:(id)object;
- (id)tfnUIKitSafeAttributedString;
- (id)tfn_truncateForWidth:(double)width;
- (id)tfn_attributedStringWithNSForegroundColorAttributes;
- (double)tfn_lineHeightAtIndex:(long long)index;
- (id)tfn_extractActiveRanges;
- (_Bool)isColorSetTo:(id)to;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_stringRange;
- (id)tfn_fontAtIndex:(long long)index;
- (id)tfs_stringByReplacingTemplateVariablesWithBlock:(id /* block */)block;
- (id)tfs_stringByReplacingTemplateVariablesWithDictionary:(id)dictionary;

@end

#endif /* NSAttributedString_TFSAdditions_h */
