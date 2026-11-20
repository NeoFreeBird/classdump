//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift30URTModuleHeaderDataViewAdapter_h
#define _TtC14T1TwitterSwift30URTModuleHeaderDataViewAdapter_h
@import Foundation;

@class Swift.Bool, _$s10TwitterURT20URTFeedbackPresenterMp, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextC, _$sSo32TFSTwitterLegacyScribeLogMethods_p, _TtCs12_SwiftObject;

@interface T1TwitterSwift.URTModuleHeaderDataViewAdapter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFSTwitterLegacyScribeLogMethods scribe;
    __C.TFSTwitterScribeContext scribeContext;
    protocol descriptor for TwitterURT.URTFeedbackPresenter feedbackPresenter;
    __C.TFNTwitterAccount account;
    Swift.Bool fontRefreshEnabled;
}

/* class methods */
+ (void)headerViewDidTapCaret:(id)caret;

@end

#endif /* _TtC14T1TwitterSwift30URTModuleHeaderDataViewAdapter_h */
