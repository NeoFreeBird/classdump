//
#ifndef TFSInternationalCallingCountry_h
#define TFSInternationalCallingCountry_h
@import Foundation;

@class NSObject, NSString;

@interface TFSInternationalCallingCountry : NSObject // (Swift)

@property (nonatomic, readonly) NSString *isoCountryCode;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *callingCode;
@property (nonatomic, readonly) NSString *valueName;

/* instance methods */
- (id)initWithIsoCountryCode:(id)code name:(id)name callingCode:(id)code;
- (id)init;

@end

#endif /* TFSInternationalCallingCountry_h */
