//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
