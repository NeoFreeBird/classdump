//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSExternalURLBehavior_h
#define TFSExternalURLBehavior_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSOpenExternalURLSessionManager.h"

@class NSObject;

@interface TFSExternalURLBehavior : NSObject <NSCopying>

@property (readonly, nonatomic) _Bool opensExternalURLs;
@property (readonly, nonatomic) _Bool externalURLsAreTrusted;
@property (readonly, nonatomic) TFSOpenExternalURLSessionManager *sessionManager;

/* class methods */
+ (id)behaviorIgnoringExternalURL;
+ (id)trustedExternalURLBehaviorWithManager:(id)manager;
+ (id)untrustedExternalURLBehaviorWithManager:(id)manager;

/* instance methods */
- (id)initAllowingExternalURLs:(_Bool)urls externalURLsAreTrusted:(_Bool)trusted sessionManager:(id)manager;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)convertToTrusted;

@end

#endif /* TFSExternalURLBehavior_h */
