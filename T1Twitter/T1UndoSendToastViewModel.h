//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UndoSendToastViewModel_h
#define T1UndoSendToastViewModel_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, TFNToastAction, TFNToastScribeContext;

@interface T1UndoSendToastViewModel : NSObject <TFNToastViewModel> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *composition;
    NSNumber"16@0:8 *duration;
}

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) double displayDuration;
@property (nonatomic, readonly) TFNToastAction *primaryAction;
@property (nonatomic, readonly) TFNToastAction *alternateAction;
@property (nonatomic, readonly) TFNToastScribeContext *scribeContext;

/* instance methods */
- (id)initWithAccount:(id)account composition:(id)composition duration:(double)duration;
- (id)init;

@end

#endif /* T1UndoSendToastViewModel_h */
