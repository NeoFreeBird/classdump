//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8Payments20TransactionViewModel_h
#define _TtC8Payments20TransactionViewModel_h
@import Foundation;

@class Payments.PaymentsNavigationSource, Payments.TransactionViewModel.Surface, _$s13TFSObservable8ObserverCMn PaymentsOrchestrator.XMoneyTransactionModel ?, _$s7Combine14AnyCancellableCMn ?, _$s7Combine9PublishedVMn MoneyProtos.XMoneyTransactionPresentation ?, _$s7Combine9PublishedVMn Payments.FormattedTransactionPresentation ?, _$s7Combine9PublishedVMn Payments.OnboardingVariant ?, _$s7Combine9PublishedVMn Payments.TransactionViewModel.Amount ?, _$s7Combine9PublishedVMn Payments.TransactionViewModel.Avatar ?, _$s7Combine9PublishedVMn Payments.TransactionViewModel.AvatarBadge ?, _$s7Combine9PublishedVMn Payments.TransactionViewModel.LoadingState, _$s7Combine9PublishedVMn Payments.TransactionViewModel.Pill ?, _$s7Combine9PublishedVMn Payments.TransactionViewModel.Title ?, _$s7Combine9PublishedVMn _$s10Foundation4DateVMn ?, _$s7Combine9PublishedVMn _$s6XIcons5XIconOMn ?, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sSSSg, _$s7Combine9PublishedVMn _$sySa -> MoneyProtos.XMoneyTransactionPresentationAttribute, _$s7Combine9PublishedVMn _$sySa -> Payments.PaymentsTimelineView.Step, _$s7Combine9PublishedVMn _$sySa -> Payments.TransactionViewModel.Action, _$sSSSg, _TtCs12_SwiftObject;

@interface Payments.TransactionViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published Swift.String _transactionID;
    Swift.String? accountID;
    Payments.TransactionViewModel.Surface surface;
    Payments.PaymentsNavigationSource source;
    nominal type descriptor for Combine.Published Payments.FormattedTransactionPresentation ? _formatted;
    nominal type descriptor for Combine.Published Payments.TransactionViewModel.LoadingState _loadingState;
    nominal type descriptor for Combine.Published nominal type descriptor for XIcons.XIcon ? _xIcon;
    nominal type descriptor for Combine.Published Payments.TransactionViewModel.Avatar ? _avatar;
    nominal type descriptor for Combine.Published Payments.TransactionViewModel.AvatarBadge ? _avatarBadge;
    nominal type descriptor for Combine.Published Payments.TransactionViewModel.Title ? _title;
    nominal type descriptor for Combine.Published Swift.String? _subtitle;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> MoneyProtos.XMoneyTransactionPresentationAttribute _attributes;
    nominal type descriptor for Combine.Published nominal type descriptor for Foundation.Date ? _date;
    nominal type descriptor for Combine.Published Payments.TransactionViewModel.Amount ? _amount;
    nominal type descriptor for Combine.Published Payments.TransactionViewModel.Amount ? _runningBalance;
    nominal type descriptor for Combine.Published Payments.TransactionViewModel.Pill ? _pill;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Payments.TransactionViewModel.Action _availableMenuActions;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Payments.TransactionViewModel.Action _availableHeaderActions;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Payments.TransactionViewModel.Action _availableInlineActions;
    nominal type descriptor for Combine.Published Swift.String? _timelineTitle;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Payments.PaymentsTimelineView.Step _timelineSteps;
    nominal type descriptor for Combine.Published Payments.OnboardingVariant ? _onboardingVariant;
    nominal type descriptor for Combine.Published MoneyProtos.XMoneyTransactionPresentation ? _presentation;
    nominal type descriptor for Combine.AnyCancellable ? transactionIDObserver;
    nominal type descriptor for TFSObservable.Observer PaymentsOrchestrator.XMoneyTransactionModel ? transactionModelObserver;
}

@end

#endif /* _TtC8Payments20TransactionViewModel_h */
