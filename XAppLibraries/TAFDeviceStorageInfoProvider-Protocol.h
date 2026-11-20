//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFDeviceStorageInfoProvider_Protocol_h
#define TAFDeviceStorageInfoProvider_Protocol_h
@import Foundation;

@protocol TAFDeviceStorageInfoProvider

@required

@property (class, nonatomic, readonly) NSNumber *availableDeviceStorageInMB;
@property (class, nonatomic, readonly) NSNumber *totalDeviceStorageInMB;

/* class methods */
+ (id)availableDeviceStorageInMB;
+ (id)totalDeviceStorageInMB;

@optional

@end

#endif /* TAFDeviceStorageInfoProvider_Protocol_h */
