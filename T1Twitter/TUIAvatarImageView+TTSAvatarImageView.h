//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIAvatarImageView_TTSAvatarImageView_h
#define TUIAvatarImageView_TTSAvatarImageView_h
@import Foundation;

@interface TUIAvatarImageView (TTSAvatarImageView) <TLFLongformAvatarView, TTSAvatarImageView>

/* instance methods */
- (void)setAvatarImageURL:(id)url;
- (id)userViewModel;
- (void)setUserViewModel:(id)model;
- (id)userDataSource;
- (void)setUserDataSource:(id)source;
- (void)updateViewModelWithName:(id)name mediaEntity:(id)entity identityType:(long long)type;
- (void)nullifyViewModel;

@end

#endif /* TUIAvatarImageView_TTSAvatarImageView_h */
