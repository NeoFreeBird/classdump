//
#ifndef _TtC14T1TwitterSwift33GrokImagineSessionManagerDelegate_h
#define _TtC14T1TwitterSwift33GrokImagineSessionManagerDelegate_h
@import Foundation;

#include "_TtP4Grok17GrokAuthenticable_-Protocol.h"

@class T1TwitterSwift.GrokAccountLinkEntryPresenter ?, _$sSo16UIViewControllerCSgXw, _$sSo17TFNTwitterAccountC, _TtCs12_SwiftObject;

@interface T1TwitterSwift.GrokImagineSessionManagerDelegate : Swift._SwiftObject <Grok.GrokAuthenticable> { // (Swift)
    /* instance variables */
    weak __C.UIViewController? viewController;
    __C.TFNTwitterAccount account;
    T1TwitterSwift.GrokAccountLinkEntryPresenter ? $__lazy_storage_$_accountLinkEntryPresenter;
}

/* instance methods */
- (id)authenticateRequestWithSourceRequest:(id)request parameters:(id)parameters;

@end

#endif /* _TtC14T1TwitterSwift33GrokImagineSessionManagerDelegate_h */
