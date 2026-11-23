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
