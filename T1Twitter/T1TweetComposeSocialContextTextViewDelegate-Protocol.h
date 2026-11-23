//
#ifndef T1TweetComposeSocialContextTextViewDelegate_Protocol_h
#define T1TweetComposeSocialContextTextViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TweetComposeSocialContextTextViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)socialContextTextView:(id)view didTapText:(id)text inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;

@end

#endif /* T1TweetComposeSocialContextTextViewDelegate_Protocol_h */
