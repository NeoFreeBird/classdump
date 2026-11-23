//
#ifndef ONBAddAvatarSuggestionViewDelegate_Protocol_h
#define ONBAddAvatarSuggestionViewDelegate_Protocol_h
@import Foundation;

@protocol ONBAddAvatarSuggestionViewDelegate

@required

/* required instance methods */
- (void)suggestionView:(id)view didSelectAvatarImage:(id)image withForegroundIndex:(long long)index backgroundIndex:(long long)index;
- (void)suggestionViewDidSelectCamera:(id)camera;

@optional

@end

#endif /* ONBAddAvatarSuggestionViewDelegate_Protocol_h */
