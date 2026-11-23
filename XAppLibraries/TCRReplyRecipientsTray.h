//
#ifndef TCRReplyRecipientsTray_h
#define TCRReplyRecipientsTray_h
@import Foundation;

@class NSObject;

@interface TCRReplyRecipientsTray : NSObject // (Swift)

/* class methods */
+ (id)makeTrayWithAccount:(id)account userReferences:(id)references scribeContext:(id)context delegate:(id)delegate onApply:(id /* block */)apply;

/* instance methods */
- (id)init;

@end

#endif /* TCRReplyRecipientsTray_h */
