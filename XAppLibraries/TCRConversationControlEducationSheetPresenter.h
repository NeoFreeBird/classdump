//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
