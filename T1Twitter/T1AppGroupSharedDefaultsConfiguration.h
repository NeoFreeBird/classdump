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
