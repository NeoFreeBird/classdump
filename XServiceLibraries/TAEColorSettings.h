//
#ifndef TAEColorSettings_h
#define TAEColorSettings_h
@import Foundation;

#include "TAETwitterColorPaletteSettingInfo.h"

@class NSArray, NSObject, NSUserDefaults;

@interface TAEColorSettings : NSObject {
    /* instance variables */
    NSUserDefaults *_sharedUserDefaults;
}

@property (copy, nonatomic) NSArray *availableColorPalettes;
@property (retain, nonatomic) TAETwitterColorPaletteSettingInfo *currentColorPalette;
@property (nonatomic) _Bool darkerPaletteSelected;
@property (nonatomic) long long primaryColorOption;

/* class methods */
+ (void)initialize;
+ (void)_tae_migrateUserDefaults;
+ (id)sharedSettings;
+ (void)_tae_postNotificationForDefaultsChange;

/* instance methods */
- (id)init;
- (id)colorPalettePassingTest:(id /* block */)test;
- (void)applyCurrentColorPalette;
- (_Bool)isDarkerPaletteSelected;
- (id)colorThemeSettingAsWebviewCookie;
- (id)colorThemeSettingAsWebviewString;
- (_Bool)darkerPaletteCachedValueExists;
- (id)colorPaletteMatchingName:(id)name;

@end

#endif /* TAEColorSettings_h */
