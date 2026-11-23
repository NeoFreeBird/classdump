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
