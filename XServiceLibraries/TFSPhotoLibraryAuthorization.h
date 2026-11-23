//
#ifndef TFSPhotoLibraryAuthorization_h
#define TFSPhotoLibraryAuthorization_h
@import Foundation;

@class NSObject;

@interface TFSPhotoLibraryAuthorization : NSObject

/* class methods */
+ (_Bool)isAuthorizedForAccessLevel:(unsigned long long)level;
+ (unsigned long long)statusForAccessLevel:(unsigned long long)level;
+ (void)requestForAccessLevel:(unsigned long long)level handler:(id /* block */)handler;

@end

#endif /* TFSPhotoLibraryAuthorization_h */
