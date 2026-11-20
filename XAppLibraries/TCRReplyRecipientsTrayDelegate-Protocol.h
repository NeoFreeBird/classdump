//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRReplyRecipientsTrayDelegate_Protocol_h
#define TCRReplyRecipientsTrayDelegate_Protocol_h
@import Foundation;

@protocol TCRReplyRecipientsTrayDelegate

@required

/* required instance methods */
- (_Bool)replyRecipientsTrayIsUserReferenceExcludable:(id)excludable;
- (_Bool)replyRecipientsTrayIsUserReferenceExcluded:(id)excluded;
- (void)replyRecipientsTrayDidIncludeUserReference:(id)reference;
- (void)replyRecipientsTrayDidExcludeUserReference:(id)reference;

@optional

@end

#endif /* TCRReplyRecipientsTrayDelegate_Protocol_h */
