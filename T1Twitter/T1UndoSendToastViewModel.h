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
