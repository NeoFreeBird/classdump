//
#ifndef _TtC14T1TwitterSwift29MuteKeywordSettingsController_h
#define _TtC14T1TwitterSwift29MuteKeywordSettingsController_h
@import Foundation;

@class NSObject, TFNTwitterAccount, _$s17TFSUtilitiesSwift26FailableAsynchronousLoaderCMn _$syShySSGGSg, _$s17TFSUtilitiesSwift26FailableAsynchronousLoaderCMn _$sySo26TFSTwitterMutedKeywordListCGSg, _$sSo17TFNTwitterAccountC, _$sSo26TFSTwitterMutedKeywordListCSg;

@interface T1TwitterSwift.MuteKeywordSettingsController : NSObject { // (Swift)
    /* instance variables */
    __C.TFSTwitterMutedKeywordList? keywordList;
    nominal type descriptor for TFSUtilitiesSwift.FailableAsynchronousLoader _$sySo26TFSTwitterMutedKeywordListCGSg $__lazy_storage_$_keywordListLoader;
    nominal type descriptor for TFSUtilitiesSwift.FailableAsynchronousLoader _$syShySSGGSg $__lazy_storage_$_discouragedKeywordsLoader;
}

@property (nonatomic, readonly) TFNTwitterAccount *account;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift29MuteKeywordSettingsController_h */
