//
#ifndef _TtC16XActivityHistory27ActivityHistoryDataProvider_h
#define _TtC16XActivityHistory27ActivityHistoryDataProvider_h
@import Foundation;

@class Swift.Bool, XActivityHistory.ActivityHistoryContentType, XActivityHistory.XActivityHistoryAccountAccess, _$s20TwitterActionService0bC0CMn ?, _$sSa -> XActivityHistory.ActivityHistoryEntry, _$sSa -> XActivityHistory.VideoActivityHistoryItemViewModel, _$sSi, _TtCs12_SwiftObject;

@interface XActivityHistory.ActivityHistoryDataProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XActivityHistory.XActivityHistoryAccountAccess account;
    XActivityHistory.ActivityHistoryContentType contentType;
    nominal type descriptor for TwitterActionService.ActionService ? $__lazy_storage_$_actionService;
    Swift.Array -> XActivityHistory.ActivityHistoryEntry allDedupedEntries;
    Swift.Int currentPage;
    Swift.Bool hasMorePages;
    Swift.Bool isLoading;
    Swift.Array -> XActivityHistory.VideoActivityHistoryItemViewModel loadedViewModels;
}

@end

#endif /* _TtC16XActivityHistory27ActivityHistoryDataProvider_h */
