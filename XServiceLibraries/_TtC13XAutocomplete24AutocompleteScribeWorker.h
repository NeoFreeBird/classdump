//
#ifndef _TtC13XAutocomplete24AutocompleteScribeWorker_h
#define _TtC13XAutocomplete24AutocompleteScribeWorker_h
@import Foundation;

#include "_TtC11XFoundation13CombineWorker.h"

@class XAutocomplete.AutocompleteEventReporting, XAutocomplete.AutocompleteStateStream;

@interface XAutocomplete.AutocompleteScribeWorker : XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    XAutocomplete.AutocompleteEventReporting autocompleteEventReporter;
    XAutocomplete.AutocompleteStateStream autocompleteStateStream;
}

@end

#endif /* _TtC13XAutocomplete24AutocompleteScribeWorker_h */
