//
#ifndef TFSLocalized_h
#define TFSLocalized_h
@import Foundation;

@class NSObject;

@interface TFSLocalized : NSObject // (Swift)

/* class methods */
+ (id)commaSeparatedNameList:(id)list;
+ (id)retrieveLocalizationBundleForLanguageCode:(id)code;
+ (id)localizedString:(id)string;
+ (id)localizedString:(id)string fromFile:(id)file;
+ (id)localizedString:(id)string fromFile:(id)file inBundle:(id)bundle;
+ (id)packageStringsBundle:(id)bundle;

/* instance methods */
- (id)init;

@end

#endif /* TFSLocalized_h */
