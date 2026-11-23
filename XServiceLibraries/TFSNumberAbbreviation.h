//
#ifndef TFSNumberAbbreviation_h
#define TFSNumberAbbreviation_h
@import Foundation;

@class NSObject;

@interface TFSNumberAbbreviation : NSObject

/* class methods */
+ (id)abbreviatedStringForNumber:(id)number language:(id)language;
+ (id)abbreviationForLanguage:(id)language;

@end

#endif /* TFSNumberAbbreviation_h */
