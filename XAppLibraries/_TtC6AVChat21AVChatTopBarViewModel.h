//
#ifndef _TtC6AVChat21AVChatTopBarViewModel_h
#define _TtC6AVChat21AVChatTopBarViewModel_h
@import Foundation;

@class Chat.AVChatCallUISession, Swift.Bool, _$s7Combine9PublishedVMn AVChat.AVChatInfoItemsViewModel ?, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$s10Foundation4DateVMn ?, _$s7Combine9PublishedVMn _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSiSg, _TtCs12_SwiftObject;

@interface AVChat.AVChatTopBarViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published Swift.String _title;
    nominal type descriptor for Combine.Published nominal type descriptor for Foundation.Date ? _joinedTimestamp;
    nominal type descriptor for Combine.Published AVChat.AVChatInfoItemsViewModel ? _infoItemsViewModel;
    nominal type descriptor for Combine.Published Swift.Bool _isInfoHidden;
    oneway _Atomic Chat.AVChatCallUISession _callUISession;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    Swift.Int? _lastObservedCount;
    Swift.Bool _hasEverHadMultipleParticipants;
}

@end

#endif /* _TtC6AVChat21AVChatTopBarViewModel_h */
