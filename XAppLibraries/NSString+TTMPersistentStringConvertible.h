//
#ifndef NSString_TTMPersistentStringConvertible_h
#define NSString_TTMPersistentStringConvertible_h
@import Foundation;

@interface NSString (TTMPersistentStringConvertible) <TTMPersistentStringConvertible>

/* instance methods */
- (unsigned long long)apm_UTF32Length;
- (void)apm_getUTF32Bytes:(void *)bytes maxBytes:(unsigned long long)bytes;
- (id)apm_stringByUnescapingFromURLArgument;
- (id)apm_MD5String;
- (_Bool)isBitEnabledAtIndex:(long long)index;
- (_Bool)_tcr_fuzzyPrefixMatch:(id)match;
- (id)ocf_richTextValue;
- (id)tuc_stringWithNewlinesReplacedByWhitespace;
- (id)tfn_convertEntityUnicodeRangeToUTF16Range:(id)range;
- (id)asSpacesSettingsDescription;
- (id)persistentString;

@end

#endif /* NSString_TTMPersistentStringConvertible_h */
