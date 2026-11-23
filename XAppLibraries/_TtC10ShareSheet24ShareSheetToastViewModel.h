//
#ifndef _TtC10ShareSheet24ShareSheetToastViewModel_h
#define _TtC10ShareSheet24ShareSheetToastViewModel_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, TFNToastAction, UIColor, _$sSS, _$sSSSg, _$sSo14TFNToastActionCSg, _$sSo7UIColorCSg;

@interface ShareSheet.ShareSheetToastViewModel : NSObject <TFNToastViewModel> // (Swift)

@property (nonatomic, readonly) NSString *detailText;
@property (nonatomic, readonly) UIColor *iconColor;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) TFNToastAction *primaryAction;

/* instance methods */
- (id)init;

@end

#endif /* _TtC10ShareSheet24ShareSheetToastViewModel_h */
