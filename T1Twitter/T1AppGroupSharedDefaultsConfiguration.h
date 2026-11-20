//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppGroupSharedDefaultsConfiguration_h
#define T1AppGroupSharedDefaultsConfiguration_h
@import Foundation;

@class NSObject;

@interface T1AppGroupSharedDefaultsConfiguration : NSObject

/* class methods */
+ (void)updateShortURLLengthSecure:(long long)secure;
+ (_Bool)updateFavoriteActionOpensPost:(_Bool)post;

@end

#endif /* T1AppGroupSharedDefaultsConfiguration_h */
