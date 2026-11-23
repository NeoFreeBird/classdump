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
