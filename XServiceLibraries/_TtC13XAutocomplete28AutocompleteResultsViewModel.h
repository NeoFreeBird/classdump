//
#ifndef _TtC13XAutocomplete28AutocompleteResultsViewModel_h
#define _TtC13XAutocomplete28AutocompleteResultsViewModel_h
@import Foundation;

@class XAutocomplete.AutocompleteEventReporting, XAutocomplete.AutocompleteResultsViewModelListener ?, XAutocomplete.AutocompleteStateStream, _$s7Combine9PublishedVMn XAutocomplete.AutocompleteState ?, _$s7Combine9PublishedVMn _$sySDySS XAutocomplete.AutocompleteResult, _$s7Combine9PublishedVMn _$sySa -> XAutocomplete.AutocompleteResult, _$s7Combine9PublishedVMn _$sySa -> XAutocomplete.AutocompleteResultViewModel, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface XAutocomplete.AutocompleteResultsViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XAutocomplete.AutocompleteResultsViewModelListener ? listener;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> XAutocomplete.AutocompleteResult _results;
    nominal type descriptor for Combine.Published  empty-list Swift.Dictionary empty-list Swift.String XAutocomplete.AutocompleteResult _resultsDictionary;
    nominal type descriptor for Combine.Published XAutocomplete.AutocompleteState ? _state;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> XAutocomplete.AutocompleteResultViewModel _viewModels;
    XAutocomplete.AutocompleteEventReporting autocompleteEventReporter;
    XAutocomplete.AutocompleteStateStream autocompleteStateStream;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

@end

#endif /* _TtC13XAutocomplete28AutocompleteResultsViewModel_h */
