//
#ifndef TCRConversationControlEducationSheetPresenter_h
#define TCRConversationControlEducationSheetPresenter_h
@import Foundation;

@class NSObject;

@interface TCRConversationControlEducationSheetPresenter : NSObject

/* class methods */
+ (void)presentFromViewController:(id)controller promptDescription:(id)description headerIcon:(id)icon userCanReply:(_Bool)reply sourceInfo:(id)info account:(id)account scribeContext:(id)context getVerifiedAction:(id /* block */)action successAction:(id /* block */)action;

@end

#endif /* TCRConversationControlEducationSheetPresenter_h */
