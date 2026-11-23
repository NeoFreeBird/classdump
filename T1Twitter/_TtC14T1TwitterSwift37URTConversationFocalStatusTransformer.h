//
#ifndef _TtC14T1TwitterSwift37URTConversationFocalStatusTransformer_h
#define _TtC14T1TwitterSwift37URTConversationFocalStatusTransformer_h
@import Foundation;

#include "TFNItemsTransformer-Protocol.h"

@class NSObject, _$sSo17T1StatusViewModel_pSg, _$sSo17TFNTwitterAccountC, _$sSo40T1ConversationFocalStatusTableRowAdapterC, __C.TTACoreStatusOptions _$sSo23T1StatusTableRowAdapterC_So19TFNDataViewItemArgsCAAtcSo17TFNTwitterAccountC_ _$s10TwitterURT32URTViewControllerUXConfigurationCMn _$sSo0A16TimelineFeaturesCtcSg;

@interface T1TwitterSwift.URTConversationFocalStatusTransformer : NSObject <TFNItemsTransformer> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.T1ConversationFocalStatusTableRowAdapter adapter;
    __C.T1StatusViewModel? contextualViewModel;
    __C.TTACoreStatusOptions _$sSo23T1StatusTableRowAdapterC_So19TFNDataViewItemArgsCAAtcSo17TFNTwitterAccountC_ nominal type descriptor for TwitterURT.URTViewControllerUXConfiguration _$sSo0A16TimelineFeaturesCtcSg $__lazy_storage_$_statusOptionsBlock;
}

/* instance methods */
- (id)transformItem:(id)item;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift37URTConversationFocalStatusTransformer_h */
