//
#ifndef _TtC13XAutocomplete42AutocompleteResultsContainerViewController_h
#define _TtC13XAutocomplete42AutocompleteResultsContainerViewController_h
@import Foundation;

@class UIViewController, XAutocomplete.AutocompleteResultsBuilder, XAutocomplete.AutocompleteResultsContainerListener ?, XAutocomplete.AutocompleteResultsContainerView ?, __C.CGRect ?;

@interface XAutocomplete.AutocompleteResultsContainerViewController : UIViewController { // (Swift)
    /* instance variables */
    XAutocomplete.AutocompleteResultsContainerListener ? listener;
    XAutocomplete.AutocompleteResultsBuilder autocompleteResultsBuilder;
    __C.CGRect ? sourceRect;
    XAutocomplete.AutocompleteResultsContainerView ? $__lazy_storage_$_internalView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC13XAutocomplete42AutocompleteResultsContainerViewController_h */
