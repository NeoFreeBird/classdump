//
#ifndef _TtC13XAutocomplete25AutocompleteResultsWorker_h
#define _TtC13XAutocomplete25AutocompleteResultsWorker_h
@import Foundation;

#include "_TtC11XFoundation13CombineWorker.h"

@class XAutocomplete.AutocompleteServicing, XAutocomplete.AutocompleteStateStream;

@interface XAutocomplete.AutocompleteResultsWorker : XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    XAutocomplete.AutocompleteServicing autocompleteService;
    XAutocomplete.AutocompleteStateStream autocompleteStateStream;
}

@end

#endif /* _TtC13XAutocomplete25AutocompleteResultsWorker_h */
