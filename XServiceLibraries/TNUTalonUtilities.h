//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUTalonUtilities_h
#define TNUTalonUtilities_h
@import Foundation;

@class NSObject;

@interface TNUTalonUtilities : NSObject

/* class methods */
+ (id)verifyTalonURL:(id)url completion:(id /* block */)completion;
+ (long long)_tnu_verifyTalonResponseStatusCode:(long long)code;
+ (_Bool)sendTalonRequestForAnalytics:(id)analytics;

@end

#endif /* TNUTalonUtilities_h */
