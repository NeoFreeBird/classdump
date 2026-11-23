//
#ifndef _TtC13XAutocomplete23AutocompleteStateWorker_h
#define _TtC13XAutocomplete23AutocompleteStateWorker_h
@import Foundation;

#include "_TtC11XFoundation13CombineWorker.h"

@class XAutocomplete.AutocompleteStateStream, XAutocomplete.AutocompleteTextUpdateStreaming;

@interface XAutocomplete.AutocompleteStateWorker : XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    XAutocomplete.AutocompleteStateStream autocompleteStateStream;
    XAutocomplete.AutocompleteTextUpdateStreaming autocompleteTextUpdateStream;
}

@end

#endif /* _TtC13XAutocomplete23AutocompleteStateWorker_h */
