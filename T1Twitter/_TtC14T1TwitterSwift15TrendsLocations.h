//
#ifndef _TtC14T1TwitterSwift15TrendsLocations_h
#define _TtC14T1TwitterSwift15TrendsLocations_h
@import Foundation;

@class NSObject, _$sSSSg5query_ -> _$ss6ResultOMn _$sSaySo24TFSTwitterTrendsLocationC _$ss5ErrorMp _$sGc10completiontSg, _$sSo17TFNTwitterAccountC, _$sSo26TFSTwitterAPICommandLoader_p, _$sSo27TFSTwitterAPICommandContext_p, _$sSo31TFSTwitterAPICommandCancellable_pSg, _$ss6ResultOMn _$sySo28TFSTwitterTrendsLocationListC _$ss5ErrorMp ?;

@interface T1TwitterSwift.TrendsLocations : NSObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TFSTwitterAPICommandLoader commandLoader;
    __C.TFSTwitterAPICommandContext context;
    nominal type descriptor for Swift.Result  empty-list __C.TFSTwitterTrendsLocationList protocol descriptor for Swift.Error ? result;
    __C.TFSTwitterAPICommandCancellable? cancellable;
    Swift.String?query first-element-marker  -> nominal type descriptor for Swift.Result Swift.Array empty-list __C.TFSTwitterTrendsLocation protocol descriptor for Swift.Error _$sGc10completiontSg pendingCompletion;
}

/* instance methods */
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift15TrendsLocations_h */
