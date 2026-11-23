//
#ifndef _TtC6Toasts10ErrorToast_h
#define _TtC6Toasts10ErrorToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, Swift.Bool, TFNToastAction, _$sSS, _$sSSSg, _$sSo14TFNToastActionCSg, _$sySbcSg;

@interface Toasts.ErrorToast : NSObject <TFNToastViewModel> { // (Swift)
    /* instance variables */
    Swift.Bool didSelectAlternateAction;
}

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) TFNToastAction *alternateAction;
@property (nonatomic, copy) id /* block */ dismissCompletionHandler;

/* instance methods */
- (id)initWithMessage:(id)message identifier:(id)identifier retry:(id /* block */)retry cancel:(id /* block */)cancel;
- (id)init;

@end

#endif /* _TtC6Toasts10ErrorToast_h */
