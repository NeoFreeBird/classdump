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
