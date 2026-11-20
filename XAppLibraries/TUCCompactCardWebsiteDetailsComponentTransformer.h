//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCCompactCardWebsiteDetailsComponentTransformer_h
#define TUCCompactCardWebsiteDetailsComponentTransformer_h
@import Foundation;

@class NSObject;

@interface TUCCompactCardWebsiteDetailsComponentTransformer : NSObject // (Swift)

/* class methods */
+ (id)transformUnifiedCardIfNeeded:(id)needed displayType:(long long)type userFullName:(id)name profileImageMediaEntity:(id)entity hasUserBadge:(_Bool)badge userBadgeImageBlock:(id /* block */)block;

/* instance methods */
- (id)init;

@end

#endif /* TUCCompactCardWebsiteDetailsComponentTransformer_h */
