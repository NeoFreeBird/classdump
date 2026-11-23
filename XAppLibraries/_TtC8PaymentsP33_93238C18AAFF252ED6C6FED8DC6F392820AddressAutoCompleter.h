//
#ifndef _TtC8PaymentsP33_93238C18AAFF252ED6C6FED8DC6F392820AddressAutoCompleter_h
#define _TtC8PaymentsP33_93238C18AAFF252ED6C6FED8DC6F392820AddressAutoCompleter_h
@import Foundation;

#include "MKLocalSearchCompleterDelegate-Protocol.h"

@class NSObject;

@interface Payments.(AddressAutoCompleter in _93238C18AAFF252ED6C6FED8DC6F3928) : NSObject <MKLocalSearchCompleterDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 _results;
    @40@0:8:16@24@32 _loading;
    @40@0:8:16@24@32 $__lazy_storage_$_localSearchCompleter;
}

/* instance methods */
- (void)completerDidUpdateResults:(id)results;
- (void)completer:(id)completer didFailWithError:(id)error;
- (id)init;

@end

#endif /* _TtC8PaymentsP33_93238C18AAFF252ED6C6FED8DC6F392820AddressAutoCompleter_h */
