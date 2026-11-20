//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIUserFacepileView_T1TwitterSwift_h
#define TUIUserFacepileView_T1TwitterSwift_h
@import Foundation;

@interface TUIUserFacepileView (T1TwitterSwift) <TLFLongformUserFacepileView>

/* instance methods */
- (long long)longformVariant;
- (void)setLongformVariant:(long long)variant;
- (void)setAvatarImageURLs:(id)urls;

@end

#endif /* TUIUserFacepileView_T1TwitterSwift_h */
