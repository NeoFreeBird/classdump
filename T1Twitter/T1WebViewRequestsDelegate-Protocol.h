//
#ifndef T1WebViewRequestsDelegate_Protocol_h
#define T1WebViewRequestsDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1WebViewRequestsDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)shouldStartLoadWithRequest:(id)request;
- (_Bool)shouldStartLoadWithRequest:(id)request;

@optional

/* optional instance methods */
- (_Bool)shouldCheckForPassbookContentForError:(id)error;
- (_Bool)shouldCheckForPassbookContentForError:(id)error;

@end

#endif /* T1WebViewRequestsDelegate_Protocol_h */
