//
#ifndef _TtC4DMV223DMNotificationDecrypter_h
#define _TtC4DMV223DMNotificationDecrypter_h
@import Foundation;

@class NSObject;

@interface DMV2.DMNotificationDecrypter : NSObject // (Swift)

/* class methods */
+ (void)decryptWithAccountID:(id)id recipient:(id)recipient sender:(id)sender userInfo:(id)info completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC4DMV223DMNotificationDecrypter_h */
