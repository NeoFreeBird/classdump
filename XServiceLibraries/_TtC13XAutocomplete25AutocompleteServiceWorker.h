//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XAutocomplete25AutocompleteServiceWorker_h
#define _TtC13XAutocomplete25AutocompleteServiceWorker_h
@import Foundation;

#include "_TtC11XFoundation13CombineWorker.h"

@class XAutocomplete.AutocompleteServicing, XAutocomplete.AutocompleteStateStream;

@interface XAutocomplete.AutocompleteServiceWorker : XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    XAutocomplete.AutocompleteServicing autocompleteService;
    XAutocomplete.AutocompleteStateStream autocompleteStateStream;
}

@end

#endif /* _TtC13XAutocomplete25AutocompleteServiceWorker_h */
