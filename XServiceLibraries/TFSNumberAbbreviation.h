//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
