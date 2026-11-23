//
#ifndef _TtC5TAVUI13DownloadToast_h
#define _TtC5TAVUI13DownloadToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, TFNToastAction, _$sSS, _$sSSSg, _$sSo14TFNToastActionCSg, _$ss5ErrorMp ?;

@interface TAVUI.DownloadToast : NSObject <TFNToastViewModel> { // (Swift)
    /* instance variables */
    protocol descriptor for Swift.Error ? error;
}

@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) TFNToastAction *primaryAction;

/* instance methods */
- (id)init;

@end

#endif /* _TtC5TAVUI13DownloadToast_h */
