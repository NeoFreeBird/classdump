//
#ifndef _TtC16XActivityHistory32VideoActivityHistoryTableAdapter_h
#define _TtC16XActivityHistory32VideoActivityHistoryTableAdapter_h
@import Foundation;

#include "TTAStatusBodyTextViewDelegate-Protocol.h"

@class TFNItemsTableRowAdapter, XActivityHistory.XActivityHistoryAccountAccess, _$sSo21TFNDataViewControllerCSgXw, _$sSo9TAVPlayerCSgSo0A15SessionProducerC_So16TAVScribeContextCtc, _$sySo18TFSActiveTextRange_p_ _$s14TFSTwitterCore28XActivityHistoryStatusAccessMp _$sSgSo16UIViewControllerCtc;

@interface XActivityHistory.VideoActivityHistoryTableAdapter : TFNItemsTableRowAdapter <TTAStatusBodyTextViewDelegate> { // (Swift)
    /* instance variables */
    XActivityHistory.XActivityHistoryAccountAccess account;
    (__C.TAVPlayerSessionProducer, __C.TAVScribeContext) -> __C.TAVPlayer? makePlayer;
    __C.TAVPlayerSessionProducer? protocol descriptor for TFSTwitterCore.XActivityHistoryStatusAccess function type (escaping) makeProducer;
     empty-list __C.TFSActiveTextRange first-element-marker  protocol descriptor for TFSTwitterCore.XActivityHistoryStatusAccess _$sSgSo16UIViewControllerCtc handleActiveRange;
    weak __C.TFNDataViewController? hostController;
}

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller willDisplayCell:(id)cell forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didEndDisplayingCell:(id)cell forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)bodyTextView:(id)view didTapActiveTextRange:(id)range;
- (id)init;

@end

#endif /* _TtC16XActivityHistory32VideoActivityHistoryTableAdapter_h */
