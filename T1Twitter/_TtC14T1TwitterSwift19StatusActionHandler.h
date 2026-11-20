//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift19StatusActionHandler_h
#define _TtC14T1TwitterSwift19StatusActionHandler_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.StatusActionHandlerDelegate ?, _$sSo16TFNTwitterStatusC, _$sSo16UIViewControllerCSgXw, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextC, _TtCs12_SwiftObject;

@interface T1TwitterSwift.StatusActionHandler : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterStatus status;
    __C.TFNTwitterAccount account;
    __C.TFSTwitterScribeContext scribeContext;
    weak __C.UIViewController? presentingViewController;
    Swift.Bool useAlternateBackgroundColor;
    T1TwitterSwift.StatusActionHandlerDelegate ? delegate;
}

@end

#endif /* _TtC14T1TwitterSwift19StatusActionHandler_h */
