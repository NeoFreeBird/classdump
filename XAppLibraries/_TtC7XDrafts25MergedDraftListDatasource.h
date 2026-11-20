//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XDrafts25MergedDraftListDatasource_h
#define _TtC7XDrafts25MergedDraftListDatasource_h
@import Foundation;

@class Swift.Bool, XDrafts.DraftTweetDataService, _$sSSSg, _$sSa -> XDrafts.DraftListItem, _$sSa -> XDrafts.DraftLocalComposition, _$sSi, _$sSo39TAPTwitterCompositionAccountPerspective_p, _$sSo39TFNTwitterCompositionPersistenceManagerC, _TtCs12_SwiftObject;

@interface XDrafts.MergedDraftListDatasource : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> XDrafts.DraftListItem drafts;
    Swift.Array -> XDrafts.DraftLocalComposition localCompositions;
    Swift.Array -> XDrafts.DraftListItem fetchedRemote;
    Swift.String? nextMaxID;
    Swift.Int fetchGeneration;
    Swift.Bool hasMoreRemoteDrafts;
    __C.TAPTwitterCompositionAccountPerspective account;
    __C.TFNTwitterCompositionPersistenceManager persistenceManager;
    XDrafts.DraftTweetDataService fetchedDraftsService;
}

@end

#endif /* _TtC7XDrafts25MergedDraftListDatasource_h */
