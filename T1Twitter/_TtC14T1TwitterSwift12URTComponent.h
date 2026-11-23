//
#ifndef _TtC14T1TwitterSwift12URTComponent_h
#define _TtC14T1TwitterSwift12URTComponent_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class NSObject, Swift.Bool, T1TwitterSwift.URTViewController ?, _$s10JetfuelSDK11ViewContextVMn, _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSiSg;

@interface T1TwitterSwift.URTComponent : NSObject <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for JetfuelSDK.ViewContext context;
    Swift.String accountId;
    Swift.Bool includeGrokAnalysisButton;
    T1TwitterSwift.URTViewController ? urtVC;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Int? cachedConfigHash;
}

/* instance methods */
- (void)dealloc;
- (void)scrollViewDidScroll:(id)scroll;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift12URTComponent_h */
