//
#ifndef TFNHapticFeedback_Protocol_h
#define TFNHapticFeedback_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator;

@protocol TFNHapticFeedback <NSObject>

@required

/* required instance methods */
- (void)prepareHapticFeedback:(unsigned long long)feedback;
- (void)performHapticFeedback:(unsigned long long)feedback;

@optional

@property (readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (readonly, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator;

@end

#endif /* TFNHapticFeedback_Protocol_h */
