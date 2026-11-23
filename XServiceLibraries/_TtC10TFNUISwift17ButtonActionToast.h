//
#ifndef _TtC10TFNUISwift17ButtonActionToast_h
#define _TtC10TFNUISwift17ButtonActionToast_h
@import Foundation;

#include "TFNToastAction.h"
#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, Swift.Bool, _$sSS, _$sSo14TFNToastActionCSg, _$sySbcSg;

@interface TFNUISwift.ButtonActionToast : NSObject <TFNToastViewModel> { // (Swift)
    /* instance variables */
    Swift.Bool actionHandled;
}

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, retain) TFNToastAction *alternateAction;
@property (nonatomic, copy) id /* block */ dismissCompletionHandler;

/* instance methods */
- (id)init;

@end

#endif /* _TtC10TFNUISwift17ButtonActionToast_h */
