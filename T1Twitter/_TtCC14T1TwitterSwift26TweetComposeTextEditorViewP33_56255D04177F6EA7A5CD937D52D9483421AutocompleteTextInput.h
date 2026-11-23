//
#ifndef _TtCC14T1TwitterSwift26TweetComposeTextEditorViewP33_56255D04177F6EA7A5CD937D52D9483421AutocompleteTextInput_h
#define _TtCC14T1TwitterSwift26TweetComposeTextEditorViewP33_56255D04177F6EA7A5CD937D52D9483421AutocompleteTextInput_h
@import Foundation;

#include "TCRAutocompleteTextInput-Protocol.h"
#include "TCRAutocompleteTextInputChangeObserver-Protocol.h"

@class NSObject, NSString;

@interface T1TwitterSwift.TweetComposeTextEditorView.(AutocompleteTextInput in _56255D04177F6EA7A5CD937D52D94834) : NSObject <TCRAutocompleteTextInput> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *tweetComposeTextEditorView;
    NSNumber"16@0:8 *isTextEditorMentionsColorBugfixEnabled;
}

@property (nonatomic, weak) id <TCRAutocompleteTextInputChangeObserver> changeObserver;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;

/* instance methods */
- (void)updateTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withReplacementText:(id)text;
- (id)init;

@end

#endif /* _TtCC14T1TwitterSwift26TweetComposeTextEditorViewP33_56255D04177F6EA7A5CD937D52D9483421AutocompleteTextInput_h */
