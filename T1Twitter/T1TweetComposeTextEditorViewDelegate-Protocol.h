//
#ifndef T1TweetComposeTextEditorViewDelegate_Protocol_h
#define T1TweetComposeTextEditorViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TweetComposeTextEditorViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)tweetComposeTextEditorViewDidChange:(id)change;
- (void)tweetComposeTextEditorView:(id)view didChangeFirstBaseWritingDirection:(long long)direction;
- (_Bool)tweetComposeTextEditorViewShouldUpdateEditing:(id)editing;
- (void)tweetComposeTextEditorViewDidUpdateMarkupTypesSelection:(id)selection markupTypes:(id)types;
- (void)tweetComposeTextEditorViewDidToggleMarkupTypes:(id)types markupTypes:(id)types;
- (_Bool)tweetComposeTextEditorViewShouldDisplayRichTextOptions:(id)options;
- (void)tweetComposeTextEditorViewDidPasteText:(id)text;

@end

#endif /* T1TweetComposeTextEditorViewDelegate_Protocol_h */
