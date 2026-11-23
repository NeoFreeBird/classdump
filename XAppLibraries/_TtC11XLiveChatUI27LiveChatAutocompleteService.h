//
#ifndef _TtC11XLiveChatUI27LiveChatAutocompleteService_h
#define _TtC11XLiveChatUI27LiveChatAutocompleteService_h
@import Foundation;

@class _$s7Combine19CurrentValueSubjectCMn _$sySa -> _$s13XAutocomplete16AutocompleteUserVMn _$sG _$ss5NeverOMn, _$sSDySS _$s14TFSTwitterCore20TwitterTypeaheadUserCMn, _$sSSSg, _$sSa -> _$s13XAutocomplete16AutocompleteUserVMn, _$sSa -> _$s13XAutocomplete16AutocompleteUserVMn _$sGyc, _$sSo17TTSTypeaheadStoreC, _$sSo32TCRAutocompleteResultsControllerC, _TtCs12_SwiftObject;

@interface XLiveChatUI.LiveChatAutocompleteService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> nominal type descriptor for XAutocomplete.AutocompleteUser _$sGyc chatPeopleProvider;
    __C.TCRAutocompleteResultsController resultsController;
    __C.TTSTypeaheadStore typeaheadStore;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Array -> nominal type descriptor for XAutocomplete.AutocompleteUser _$sG nominal type descriptor for Swift.Never usersSubject;
    Swift.String? currentQuery;
    Swift.Array -> nominal type descriptor for XAutocomplete.AutocompleteUser searchPeople;
    Swift.Dictionary empty-list Swift.String nominal type descriptor for TFSTwitterCore.TwitterTypeaheadUser usersByID;
}

@end

#endif /* _TtC11XLiveChatUI27LiveChatAutocompleteService_h */
