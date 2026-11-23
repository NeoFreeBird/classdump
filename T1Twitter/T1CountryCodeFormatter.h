//
#ifndef T1CountryCodeFormatter_h
#define T1CountryCodeFormatter_h
@import Foundation;

@class NSFormatter;

@interface T1CountryCodeFormatter : NSFormatter

@property (readonly, nonatomic) id /* block */ comparator;

/* instance methods */
- (id)stringForObjectValue:(id)value;
- (_Bool)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;

@end

#endif /* T1CountryCodeFormatter_h */
