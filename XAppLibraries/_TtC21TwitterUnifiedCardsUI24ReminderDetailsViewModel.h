//
#ifndef _TtC21TwitterUnifiedCardsUI24ReminderDetailsViewModel_h
#define _TtC21TwitterUnifiedCardsUI24ReminderDetailsViewModel_h
@import Foundation;

@class _$s20TwitterActionService0bC0CMn, _$s7Combine9PublishedVMn TwitterUnifiedCards.ReminderData ?, _$s7Combine9PublishedVMn _$s10Foundation4DateVMn, _$s7Combine9PublishedVMn _$sSbSg, _$s7Combine9PublishedVMn _$syycSg, _$sSo25UIImpactFeedbackGeneratorCSg, _TtCs12_SwiftObject;

@interface TwitterUnifiedCardsUI.ReminderDetailsViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published TwitterUnifiedCards.ReminderData ? _data;
    nominal type descriptor for Combine.Published Swift.Bool? _isNotificationSubscribed;
    nominal type descriptor for Combine.Published nominal type descriptor for Foundation.Date _now;
    nominal type descriptor for Combine.Published (() -> ())? _didTapActionButton;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    __C.UIImpactFeedbackGenerator? $__lazy_storage_$_mediumFeedbackGenerator;
    __C.UIImpactFeedbackGenerator? $__lazy_storage_$_lightFeedbackGenerator;
}

@end

#endif /* _TtC21TwitterUnifiedCardsUI24ReminderDetailsViewModel_h */
