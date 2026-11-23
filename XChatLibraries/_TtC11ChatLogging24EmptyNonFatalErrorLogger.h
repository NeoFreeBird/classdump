//
#ifndef _TtC11ChatLogging24EmptyNonFatalErrorLogger_h
#define _TtC11ChatLogging24EmptyNonFatalErrorLogger_h
@import Foundation;

#include "_TtP11ChatLogging23ChatNonFatalErrorLogger_-Protocol.h"

@class _TtCs12_SwiftObject;

@interface ChatLogging.EmptyNonFatalErrorLogger : Swift._SwiftObject <ChatLogging.ChatNonFatalErrorLogger> // (Swift)

/* instance methods */
- (void)recordError:(id)error withAdditionalUserInfo:(id)info;

@end

#endif /* _TtC11ChatLogging24EmptyNonFatalErrorLogger_h */
