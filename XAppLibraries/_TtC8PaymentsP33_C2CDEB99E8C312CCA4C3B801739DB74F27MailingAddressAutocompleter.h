//
#ifndef _TtC8PaymentsP33_C2CDEB99E8C312CCA4C3B801739DB74F27MailingAddressAutocompleter_h
#define _TtC8PaymentsP33_C2CDEB99E8C312CCA4C3B801739DB74F27MailingAddressAutocompleter_h
@import Foundation;

#include "MKLocalSearchCompleterDelegate-Protocol.h"

@class NSObject;

@interface Payments.(MailingAddressAutocompleter in _C2CDEB99E8C312CCA4C3B801739DB74F) : NSObject <MKLocalSearchCompleterDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 onResults;
    @40@0:8:16@24@32 $__lazy_storage_$_completer;
}

/* instance methods */
- (void)completerDidUpdateResults:(id)results;
- (void)completer:(id)completer didFailWithError:(id)error;
- (id)init;

@end

#endif /* _TtC8PaymentsP33_C2CDEB99E8C312CCA4C3B801739DB74F27MailingAddressAutocompleter_h */
