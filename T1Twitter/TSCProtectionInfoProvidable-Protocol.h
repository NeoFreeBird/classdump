//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSCProtectionInfoProvidable_Protocol_h
#define TSCProtectionInfoProvidable_Protocol_h
@import Foundation;

@protocol TSCProtectionInfoProvidable

@required

@property (nonatomic, readonly) _Bool isFromProtectedUser;

@optional

@end

#endif /* TSCProtectionInfoProvidable_Protocol_h */
