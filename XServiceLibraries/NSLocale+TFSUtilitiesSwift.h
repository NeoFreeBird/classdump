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
