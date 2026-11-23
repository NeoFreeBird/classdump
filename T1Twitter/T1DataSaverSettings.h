//
#ifndef T1DataSaverSettings_h
#define T1DataSaverSettings_h
@import Foundation;

@class NSNumber, NSObject, NSUserDefaults;

@interface T1DataSaverSettings : NSObject

@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSNumber *previousImageQualitySettings;
@property (retain, nonatomic) NSNumber *previousHighQualityImagesUploadSettings;
@property (retain, nonatomic) NSNumber *previousVideoQualitySettings;
@property (retain, nonatomic) NSNumber *previousVideoQualityUploadSettings;
@property (retain, nonatomic) NSNumber *previousMediaAutoplaySettings;
@property (nonatomic) _Bool dataSaverEnabled;

/* instance methods */
- (id)init;
- (id)initWithUserDefaults:(id)defaults;
- (_Bool)isDataSaverEnabled;
- (void)_t1_updateImageQualitySettingsWithDataSaverEnabled:(_Bool)enabled;
- (void)_t1_updateHighQualityImagesUploadSettingsWithDataSaverEnabled:(_Bool)enabled;
- (void)_t1_updateVideoQualitySettingsWithDataSaverEnabled:(_Bool)enabled;
- (void)_t1_updateVideoQualityUploadSettingsWithDataSaverEnabled:(_Bool)enabled;
- (void)_t1_updateMediaAutoplaySettingsWithDataSaverEnabled:(_Bool)enabled;
- (id)_t1_previousSettingsForKey:(id)key;
- (void)_t1_setPreviousSettings:(id)settings forKey:(id)key;

@end

#endif /* T1DataSaverSettings_h */
