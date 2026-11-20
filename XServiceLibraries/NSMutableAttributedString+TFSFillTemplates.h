//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSMutableAttributedString_TFSFillTemplates_h
#define NSMutableAttributedString_TFSFillTemplates_h
@import Foundation;

@interface NSMutableAttributedString (TFSFillTemplates)

/* instance methods */
- (void)tfn_setLink;
- (void)tfn_setLinkInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)tfn_setLinkInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range flavor:(long long)flavor;
- (void)tfn_setLinkInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range color:(id)color;
- (void)tfn_setLinks:(id)links color:(id)color;
- (void)tfn_setLinks:(id)links color:(id)color font:(id)font;
- (void)addAttributesWithHashflagRange:(id)range pointSize:(double)size insertPlaceholderStringIfNeeded:(_Bool)needed;
- (id)initWithString:(id)string font:(id)font;
- (id)initWithString:(id)string font:(id)font lineSpacing:(double)spacing;
- (id)initWithString:(id)string font:(id)font alignment:(long long)alignment lineBreakMode:(long long)mode;
- (id)initWithString:(id)string font:(id)font alignment:(long long)alignment lineBreakMode:(long long)mode paragraphSpacing:(double)spacing;
- (id)initWithString:(id)string font:(id)font alignment:(long long)alignment lineBreakMode:(long long)mode paragraphSpacing:(double)spacing lineHeight:(double)height;
- (id)initWithString:(id)string font:(id)font alignment:(long long)alignment lineBreakMode:(long long)mode paragraphSpacing:(double)spacing lineHeight:(double)height lineSpacing:(double)spacing;
- (id)initWithString:(id)string font:(id)font alignment:(long long)alignment lineBreakMode:(long long)mode paragraphSpacing:(double)spacing lineHeight:(double)height writingDirection:(long long)direction;
- (id)initWithString:(id)string font:(id)font alignment:(long long)alignment lineBreakMode:(long long)mode paragraphSpacing:(double)spacing lineHeight:(double)height lineSpacing:(double)spacing writingDirection:(long long)direction;
- (id)initWithString:(id)string font:(id)font lineHeight:(double)height firstLineHeadIndent:(double)indent;
- (void)setFont:(id)font;
- (void)setFont:(id)font inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setUnderlined;
- (void)setUnderlinedInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setParagraphStyle:(id)style;
- (void)setParagraphStyle:(id)style inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setColor:(id)color;
- (void)setColor:(id)color inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setBackgroundColor:(id)color;
- (void)setBackgroundColor:(id)color inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setKerning:(double)kerning;
- (void)setKerning:(double)kerning inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)tfn_insertVectorImageNamed:(id)named tintColor:(id)color pointSize:(double)size atIndex:(long long)index;
- (void)tfn_insertImage:(id)image atIndex:(long long)index;
- (id)tfn_setColorsForActiveTextRanges:(id)ranges;
- (id)tfn_setColorsForActiveTextRanges:(id)ranges usingFont:(id)font;
- (void)tfn_setAccountSpoofingProofFontForActiveTextRanges:(id)ranges baseFont:(id)font;
- (void)tfn_addActiveRanges:(id)ranges;
- (void)tfn_removeActiveRanges;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_stringRange;
- (void)_setFont:(id)font alignment:(long long)alignment lineBreakMode:(long long)mode paragraphSpacing:(double)spacing lineHeight:(double)height lineSpacing:(double)spacing writingDirection:(long long)direction;
- (void)_setFont:(id)font lineHeight:(double)height firstLineHeadIndent:(double)indent;
- (void)_setFont:(id)font lineSpacing:(double)spacing;
- (void)_setDefaultParagraphStyleWithFont:(id)font;
- (double)_lineHeightForFont:(id)font;
- (void)tfs_replaceTemplateVariablesWithBlock:(id /* block */)block;
- (void)tfs_replaceTemplateVariablesWithDictionary:(id)dictionary;
- (id)tfs_fillByBlock:(id /* block */)block;
- (id)tfs_fillWithSubstitutions:(id)substitutions;

@end

#endif /* NSMutableAttributedString_TFSFillTemplates_h */
