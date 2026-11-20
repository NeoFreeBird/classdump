//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAuthAppOAuth2Helper_h
#define TFSAuthAppOAuth2Helper_h
@import Foundation;

@class NSObject;

@interface TFSAuthAppOAuth2Helper : NSObject

/* instance methods */
- (void)signRequest:(id)request appCredential:(id)credential completion:(id /* block */)completion;
- (void)signRequest:(id)request bearerToken:(id)token completion:(id /* block */)completion;

@end

#endif /* TFSAuthAppOAuth2Helper_h */
