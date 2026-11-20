//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainMutableDataUsageSettingsProvider_Protocol_h
#define Subsystem_ios_iosArm64_mainMutableDataUsageSettingsProvider_Protocol_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainDataUsageSettingsProvider-Protocol.h"

@protocol Subsystem_ios_iosArm64_mainMutableDataUsageSettingsProvider <Subsystem_ios_iosArm64_mainDataUsageSettingsProvider>

@required

/* required instance methods */
- (id)observeSaveToPhotos;
- (id)observeSettingType:(id)type;
- (id)observeSettingType:(id)type;
- (id)observeUploadQuality;
- (void)setSaveToPhotosSaveToPhotos:(_Bool)photos completionHandler:(id /* block */)handler;
- (void)setSaveToPhotosSaveToPhotos:(_Bool)photos completionHandler:(id /* block */)handler;
- (void)setSettingType:(id)type value:(id)value completionHandler:(id /* block */)handler;
- (void)setSettingType:(id)type value:(id)value completionHandler:(id /* block */)handler;
- (void)setUploadQualityUploadQuality:(id)quality completionHandler:(id /* block */)handler;
- (void)setUploadQualityUploadQuality:(id)quality completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainMutableDataUsageSettingsProvider_Protocol_h */
