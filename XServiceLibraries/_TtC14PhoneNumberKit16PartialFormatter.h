//
#ifndef _TtC14PhoneNumberKit16PartialFormatter_h
#define _TtC14PhoneNumberKit16PartialFormatter_h
@import Foundation;

@class PhoneNumberKit.MetadataManager ?, PhoneNumberKit.MetadataTerritory ?, PhoneNumberKit.PhoneNumberParser ?, PhoneNumberKit.PhoneNumberUtility, PhoneNumberKit.RegexManager ?, Swift.Bool, _$sSS, _$sSiSg, _TtCs12_SwiftObject;

@interface PhoneNumberKit.PartialFormatter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    PhoneNumberKit.PhoneNumberUtility utility;
    PhoneNumberKit.MetadataManager ? metadataManager;
    PhoneNumberKit.PhoneNumberParser ? parser;
    PhoneNumberKit.RegexManager ? regexManager;
    Swift.String defaultRegion;
    Swift.Int? maxDigits;
    PhoneNumberKit.MetadataTerritory ? defaultMetadata;
    PhoneNumberKit.MetadataTerritory ? currentMetadata;
    Swift.String prefixBeforeNationalNumber;
    Swift.Bool shouldAddSpaceAfterNationalPrefix;
    Swift.Bool withPrefix;
    Swift.Bool ignoreIntlNumbers;
}

@end

#endif /* _TtC14PhoneNumberKit16PartialFormatter_h */
