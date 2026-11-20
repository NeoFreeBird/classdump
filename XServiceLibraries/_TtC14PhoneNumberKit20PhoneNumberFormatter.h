//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14PhoneNumberKit20PhoneNumberFormatter_h
#define _TtC14PhoneNumberKit20PhoneNumberFormatter_h
@import Foundation;

@class NSFormatter, NSString, PhoneNumberKit.PartialFormatter, PhoneNumberKit.PhoneNumberUtility, Swift.Bool, _$sSS;

@interface PhoneNumberKit.PhoneNumberFormatter : NSFormatter { // (Swift)
    /* instance variables */
    PhoneNumberKit.PhoneNumberUtility utility;
    PhoneNumberKit.PartialFormatter partialFormatter;
}

@property (nonatomic) _Bool generatesPhoneNumber;
@property (nonatomic, copy) NSString *defaultRegion;
@property (nonatomic) _Bool withPrefix;
@property (nonatomic, readonly) NSString *currentRegion;

/* instance methods */
- (id)stringForObjectValue:(id)value;
- (_Bool)getObjectValue:(id *)value forString:(id)string errorDescription:(id *)description;
- (_Bool)isPartialStringValid:(id *)valid proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range originalString:(id)string originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range errorDescription:(id *)description;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* _TtC14PhoneNumberKit20PhoneNumberFormatter_h */
