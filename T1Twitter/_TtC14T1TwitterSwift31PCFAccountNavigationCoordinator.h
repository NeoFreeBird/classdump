//
#ifndef _TtC14T1TwitterSwift31PCFAccountNavigationCoordinator_h
#define _TtC14T1TwitterSwift31PCFAccountNavigationCoordinator_h
@import Foundation;

@class NSObject, Swift.Bool, T1TwitterSwift.PCFAccountLabelViewControllerFactory, _$s14TFSTwitterCore15PCFLabelWrapperCMn ?, _$sSS, _$sSo16UIViewControllerCSgXw, _$sSo17TFNTwitterAccountC, _$sSo22UINavigationControllerCSgXw, _$sSo23TFSTwitterScribeContextC;

@interface T1TwitterSwift.PCFAccountNavigationCoordinator : NSObject { // (Swift)
    /* instance variables */
    weak __C.UIViewController? rootViewController;
    __C.TFNTwitterAccount account;
    T1TwitterSwift.PCFAccountLabelViewControllerFactory controllerFactory;
    Swift.String scribePage;
    __C.TFSTwitterScribeContext scribeContext;
    Swift.Bool hasParodyProfileLabelEnabled;
    nominal type descriptor for TFSTwitterCore.PCFLabelWrapper ? parodyCommentaryFanLabel;
    Swift.Bool isEditProfileEnabled;
    Swift.String profileLabelsLearnMoreURL;
    weak __C.UINavigationController? currentlyPresentedViewController;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift31PCFAccountNavigationCoordinator_h */
