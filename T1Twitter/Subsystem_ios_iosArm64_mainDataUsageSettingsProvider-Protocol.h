//
#ifndef Subsystem_ios_iosArm64_mainDataUsageSettingsProvider_Protocol_h
#define Subsystem_ios_iosArm64_mainDataUsageSettingsProvider_Protocol_h
@import Foundation;

@class Subsystem_ios_iosArm64_mainDataUsageAutoDownloadSetting, Subsystem_ios_iosArm64_mainDataUsageUploadQuality;

@protocol Subsystem_ios_iosArm64_mainDataUsageSettingsProvider

@required

@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainDataUsageAutoDownloadSetting *documentsSetting;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainDataUsageAutoDownloadSetting *linksSetting;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainDataUsageAutoDownloadSetting *photosSetting;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainDataUsageAutoDownloadSetting *postsSetting;
@property (nonatomic, readonly) _Bool saveToPhotos;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainDataUsageUploadQuality *uploadQuality;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainDataUsageAutoDownloadSetting *videosSetting;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainDataUsageSettingsProvider_Protocol_h */
