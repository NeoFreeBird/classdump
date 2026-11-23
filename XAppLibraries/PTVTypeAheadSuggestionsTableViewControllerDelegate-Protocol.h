//
#ifndef PTVTypeAheadSuggestionsTableViewControllerDelegate_Protocol_h
#define PTVTypeAheadSuggestionsTableViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVTypeAheadSuggestionsTableViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)didLoadSuggestionsFromKeyboardAccessoryView:(id)view;
- (void)didClearSuggestionsFromKeyboardAccessoryView:(id)view;
- (void)didScrollSuggestionsFromKeyboardAccessoryView:(id)view;
- (void)didSelectSuggestion:(id)suggestion replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range fromKeyboardAccessoryView:(id)view;
- (_Bool)willSuggestionExceedMaxBroadcastTitleLength:(id)length ifReplacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;

@optional

@end

#endif /* PTVTypeAheadSuggestionsTableViewControllerDelegate_Protocol_h */
