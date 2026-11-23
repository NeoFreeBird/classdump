//
#ifndef _TtC14T1TwitterSwift18XNativeBridgeToast_h
#define _TtC14T1TwitterSwift18XNativeBridgeToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, UIColor, _$sSS, _$sSSSg, _$sSd, _$sSo7UIColorCSg, _$sySbcSg;

@interface T1TwitterSwift.XNativeBridgeToast : NSObject <TFNToastViewModel> // (Swift)

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *detailText;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) UIColor *iconColor;
@property (nonatomic, readonly) double displayDuration;
@property (nonatomic, readonly) id /* block */ dismissCompletionHandler;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift18XNativeBridgeToast_h */
