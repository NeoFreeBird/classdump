//
#ifndef T1DirectMessageConversationStatusTweetstormIndicatorViewAdapter_h
#define T1DirectMessageConversationStatusTweetstormIndicatorViewAdapter_h
@import Foundation;

#include "T1StandardStatusTweetstormIndicatorViewAdapter.h"

@interface T1DirectMessageConversationStatusTweetstormIndicatorViewAdapter : T1StandardStatusTweetstormIndicatorViewAdapter

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;

@end

#endif /* T1DirectMessageConversationStatusTweetstormIndicatorViewAdapter_h */
