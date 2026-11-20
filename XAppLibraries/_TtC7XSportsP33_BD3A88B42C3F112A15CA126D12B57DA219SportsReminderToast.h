//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSportsP33_BD3A88B42C3F112A15CA126D12B57DA219SportsReminderToast_h
#define _TtC7XSportsP33_BD3A88B42C3F112A15CA126D12B57DA219SportsReminderToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString;

@interface XSports.(SportsReminderToast in _BD3A88B42C3F112A15CA126D12B57DA2) : NSObject <TFNToastViewModel> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 detail;
    @40@0:8:16@24@32 avatarURL;
    @40@0:8:16@24@32 imagePipeline;
}

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *detailText;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) id /* block */ iconAccessoryViewProvider;

/* instance methods */
- (id)init;

@end

#endif /* _TtC7XSportsP33_BD3A88B42C3F112A15CA126D12B57DA219SportsReminderToast_h */
