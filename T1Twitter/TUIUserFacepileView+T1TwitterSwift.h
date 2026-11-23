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
