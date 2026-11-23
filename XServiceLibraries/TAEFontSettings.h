//
#ifndef TAEFontSettings_h
#define TAEFontSettings_h
@import Foundation;

@class NSObject;

@interface TAEFontSettings : NSObject

/* class methods */
+ (void)initialize;
+ (double)fontSizeForWindowSize:(struct CGSize { double x0; double x1; })size;
+ (void)reset;
+ (void)initializeSettingsWithWindow:(id)window;
+ (_Bool)isInitialized;
+ (double)scaleOfCurrentFontSizeFromDefaultFontSize;
+ (double)scaleFromDefaultFontSize:(double)size;
+ (double)currentFontSize;
+ (double)baselineFontSize;
+ (double)defaultFontSize;
+ (double)defaultMaximumDynamicFontSize;
+ (long long)currentContentSizeModifier;
+ (void)setCurrentContentSizeModifier:(long long)modifier;
+ (id)currentContentSizeCategory;
+ (void)setCurrentContentSizeCategory:(id)category;
+ (double)currentFontSizeWithContentSizeModifier:(_Bool)modifier;
+ (double)fontSizeWithBaselineFontSize:(double)size contentSizeCategory:(id)category contentSizeModifier:(long long)modifier windowSize:(struct CGSize { double x0; double x1; })size;
+ (void)_initializeWithWindow:(id)window;
+ (_Bool)_updateStaticStateForWindow:(id)window;
+ (void)_fontSizeSettingsDidChange;
+ (void)_boldTextStatusDidChange;
+ (void)_prepareChangeObserversForWindow:(id)window;

@end

#endif /* TAEFontSettings_h */
