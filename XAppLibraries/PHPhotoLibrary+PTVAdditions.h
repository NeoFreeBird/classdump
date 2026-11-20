//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PHPhotoLibrary_PTVAdditions_h
#define PHPhotoLibrary_PTVAdditions_h
@import Foundation;

@interface PHPhotoLibrary (PTVAdditions)

/* class methods */
+ (long long)ptv_authorizationStatusForAccessLevel:(unsigned long long)level;
+ (void)ptv_requestAuthorizationForAccessLevel:(unsigned long long)level handler:(id /* block */)handler;

@end

#endif /* PHPhotoLibrary_PTVAdditions_h */
