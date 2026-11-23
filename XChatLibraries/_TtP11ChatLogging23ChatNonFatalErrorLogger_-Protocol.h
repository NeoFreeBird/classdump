//
#ifndef _TtP11ChatLogging23ChatNonFatalErrorLogger__Protocol_h
#define _TtP11ChatLogging23ChatNonFatalErrorLogger__Protocol_h
@import Foundation;

@protocol ChatLogging.ChatNonFatalErrorLogger

@required

/* required instance methods */
- (void)recordError:(id)error withAdditionalUserInfo:(id)info;

@optional

@end

#endif /* _TtP11ChatLogging23ChatNonFatalErrorLogger__Protocol_h */
