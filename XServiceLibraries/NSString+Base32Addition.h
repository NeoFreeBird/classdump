//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSString_Base32Addition_h
#define NSString_Base32Addition_h
@import Foundation;

@interface NSString (Base32Addition) <TFNPickableValue, TNLRequestOperationCancelSource>

/* class methods */
+ (id)_contentTitleAttributesWithTextColor:(id)color;
+ (id)contentTitleAttributes;
+ (id)contentTitleLightAttributes;
+ (id)contentTitleDarkAttributes;
+ (id)contentSubtextAttributes;
+ (id)tfs_timeFormatString:(double)string;
+ (id)tfs_unitsFormatString:(double)string;
+ (double)tfn_estimatedHeightWithFont:(id)font;
+ (id)tfn_accessibilityStringByConcatenatingStrings:(id)strings;
+ (id)tfn_accessibilityStringByConcatenatingStringsInArray:(id)array;
+ (id)databaseArgumentQueryListForArgumentCount:(unsigned long long)count;
+ (id /* block */)tfs_rejectEmptyStrippedStringsBlock;
+ (id)tfs_stringValidatingUTF8:(const char *)utf8;
+ (id)tfs_stringInTimeFormatWithSeconds:(double)seconds;
+ (id)tfs_stringInUnitsFormatWithSeconds:(double)seconds;
+ (id)stringWithBase32String:(id)string;

/* instance methods */
- (_Bool)tt_isEmoji;
- (_Bool)_IFUnicodeURL_isValidCharacterSequence;
- (id)_IFUnicodeURL_splitAfterString:(id)string;
- (id)_IFUnicodeURL_splitBeforeCharactersInSet:(id)set;
- (id)contentTitleAttributedString;
- (id)contentTitleLightAttributedString;
- (id)contentTitleDarkAttributedString;
- (id)contentSubtextAttributedString;
- (id)canonicalTwitterUsername;
- (_Bool)isPossibleTwitterUsername;
- (id)twitterUsernameByRemovingInvalidCharacters;
- (id)twitterUsernameByStrippingUsernameMarkers;
- (_Bool)tfs_compositionShouldBeRenderedRTLDuringEditingInRTL:(_Bool)rtl;
- (id)tfs_dateFromStringFormattedLikeHTTPDate;
- (id)tfs_parsedDateFromStringFormattedLikeHTTPDate;
- (id)valueName;
- (id)tfn_asSectionHeader;
- (id)tfn_asNextSectionHeader;
- (id)_tfn_headerItemTreatingAsNextSectionHeader:(_Bool)header;
- (void)tfn_drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withFont:(id)font color:(id)color lineBreakMode:(long long)mode alignment:(long long)alignment;
- (void)tfn_drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withFont:(id)font lineBreakMode:(long long)mode;
- (double)tfn_estimatedHeightWithFont:(id)font;
- (struct CGSize { double x0; double x1; })tfn_estimatedSizeWithFont:(id)font;
- (double)tfn_estimatedHeightWithFont:(id)font constrainedToSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })tfn_estimatedSizeWithFont:(id)font constrainedToSize:(struct CGSize { double x0; double x1; })size;
- (long long)tfn_estimatedNumberOfLinesWithFont:(id)font constrainedToSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })_tfn_estimatedSizeWithFont:(id)font constrainedToSize:(struct CGSize { double x0; double x1; })size getNumberOfLines:(long long *)lines;
- (struct CGSize { double x0; double x1; })tfn_sizeWithFont:(id)font;
- (struct CGSize { double x0; double x1; })tfn_sizeWithFont:(id)font constrainedToSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })tfn_sizeWithFont:(id)font forWidth:(double)width lineBreakMode:(long long)mode;
- (struct CGSize { double x0; double x1; })tfn_sizeWithFont:(id)font forWidth:(double)width lineBreakMode:(long long)mode multiline:(_Bool)multiline;
- (struct CGSize { double x0; double x1; })tfn_sizeWithFont:(id)font maxSize:(struct CGSize { double x0; double x1; })size maxNumberOfLines:(long long)lines;
- (double)tfn_heightWithFont:(id)font maxWidth:(double)width;
- (double)tfn_heightWithFont:(id)font maxWidth:(double)width maxNumberOfLines:(long long)lines;
- (id)tfn_accessibilityStringWithTwitterSymbols;
- (id)tfn_encodedEmojiString;
- (id)tnu_URLSegmentEncodedString;
- (id)tnu_URLPathEncodedString;
- (id)tnl_cancelSourceDescription;
- (id)unicodeCodePointIdentifier;
- (id)withQuotationMarks;
- (_Bool)tfs_containsOnlyEmoji;
- (id)tfs_stringByReplacingTemplateVariablesWithBlock:(id /* block */)block;
- (id)tfs_stringByReplacingTemplateVariablesWithDictionary:(id)dictionary;
- (id)_tfs_swizzled_stringByReplacingCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withString:(id)string;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_tfs_wordRangeExpandLeft:(struct _NSRange { unsigned long long x0; unsigned long long x1; })left;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_tfs_wordRangeExpandRight:(struct _NSRange { unsigned long long x0; unsigned long long x1; })right;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })wordRangeForIndex:(long long)index;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })wordRangeIncludingUnderscoreForIndex:(long long)index;
- (_Bool)tfs_containsRTLCharacters;
- (_Bool)tfs_plainTextShouldBeRenderedFromRight;
- (_Bool)tfs_statusTextShouldBeRenderedFromRight;
- (id)tfs_stringByRemovingAllDirectionControlCharacters;
- (id)tfs_rangesOfCombiningMarksBeyondLimit:(unsigned long long)limit;
- (id)tfs_stringByLimitingCombiningMarksPerCharacterTo:(unsigned long long)to;
- (id)tfs_labelTextByAddingDirectionControlCharacter;
- (_Bool)tfs_labelTextShouldBeRenderedFromRight;
- (id)tfs_stringByUnescapingHTMLEntities;
- (id)stringValue;
- (_Bool)tfs_isEqualToNullableString:(id)string;
- (_Bool)isNotEmptyAfterTrimmingWhitespace;
- (_Bool)tfs_isCaseInsensitiveSameAsString:(id)string;
- (_Bool)tfs_isInternetProtocolAddress;
- (_Bool)tfs_containsPrintableCharacters;
- (_Bool)tfs_containsOnlyNumbers;
- (_Bool)tfs_containsOnlyHexNumbers;
- (id)tfs_number;
- (_Bool)tfs_containsString:(id)string;
- (long long)tfs_hexIntegerValue;
- (_Bool)tfs_hasPrefixIgnoringCase:(id)_case;
- (unsigned long long)tfs_lengthInCodePoints;
- (_Bool)tfs_localizedCaseInsensitiveContainsString:(id)string;
- (_Bool)tfs_matchesPartialsSearchString:(id)string;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })tfs_rangeOfCharactersFromSet:(id)set;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })tfs_rangeOfCharactersFromSet:(id)set options:(unsigned long long)options;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })tfs_rangeOfCharactersFromSet:(id)set options:(unsigned long long)options range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)tfs_indicesOfCharactersInSet:(id)set;
- (id)tfs_SHA1HashAsHexStringValue;
- (id)tfs_stringByCollapsingWhitespaceToSpace;
- (id)tfs_stringByConvertingWhitespaceToNonbreaking;
- (id)tfs_stringByTrimmingTrailingSlash;
- (id)tfs_stringByTrimmingLeadingWhitespace;
- (id)tfs_stringByTrimmingTrailingWhitespace;
- (id)tfs_stringByTrimmingWhitespace;
- (id)tfs_stringByTrimmingLeadingOctothorpe;
- (id)tfs_stringByRemovingNullCharacters;
- (id)tfs_stringByRemovingLocalizedDelimiters;
- (id)tfs_stringByStrippingNonAlphanumericCharacters;
- (id)tfs_rangesByRemovingRanges:(id)ranges;
- (id)tfs_directionSafeString;
- (long long)tfs_editDistance:(id)distance maxSearch:(unsigned long long)search;
- (id)tfs_substringFromUniCharIndex:(long long)index codePointCount:(long long)count;
- (id)tfs_base64StringFromBase64URLString;
- (id)tfs_base64URLStringFromBase64String;
- (id)tfs_converUnicodeRangesToUTF16Ranges:(id)ranges;
- (id)base32String;

@end

#endif /* NSString_Base32Addition_h */
