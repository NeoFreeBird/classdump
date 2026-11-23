//
#ifndef _TtC8Payments37PaymentsContextDocumentStorageService_h
#define _TtC8Payments37PaymentsContextDocumentStorageService_h
@import Foundation;

#include "UIDocumentPickerDelegate-Protocol.h"

@class NSObject, Payments.PaymentsActionService, Payments.PaymentsContextDocumentStorageService.PickerContext ?;

@interface Payments.PaymentsContextDocumentStorageService : NSObject <UIDocumentPickerDelegate> { // (Swift)
    /* instance variables */
    Payments.PaymentsActionService actionService;
    Payments.PaymentsContextDocumentStorageService.PickerContext ? pickerContext;
}

/* instance methods */
- (void)documentPickerWasCancelled:(id)cancelled;
- (void)documentPicker:(id)picker didPickDocumentsAtURLs:(id)urls;
- (id)init;

@end

#endif /* _TtC8Payments37PaymentsContextDocumentStorageService_h */
