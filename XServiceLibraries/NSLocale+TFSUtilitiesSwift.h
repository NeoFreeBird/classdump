//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSLocale_TFSUtilitiesSwift_h
#define NSLocale_TFSUtilitiesSwift_h
@import Foundation;

@interface NSLocale (TFSUtilitiesSwift)

/* class methods */
+ (_Bool)isJapanesePreferredOverChinese;
+ (id)languagesToIsoCodes;
+ (void)setLanguagesToIsoCodes:(id)codes;

@end

#endif /* NSLocale_TFSUtilitiesSwift_h */
