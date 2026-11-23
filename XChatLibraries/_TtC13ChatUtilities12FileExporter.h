//
#ifndef _TtC13ChatUtilities12FileExporter_h
#define _TtC13ChatUtilities12FileExporter_h
@import Foundation;

#include "UIDocumentPickerDelegate-Protocol.h"

@class ChatUtilities.FileExporter ?, NSObject, _$s10Foundation3URLVMn;

@interface ChatUtilities.FileExporter : NSObject <UIDocumentPickerDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL temporaryDirectoryURL;
    ChatUtilities.FileExporter ? retainedSelf;
}

/* instance methods */
- (void)documentPicker:(id)picker didPickDocumentsAtURLs:(id)urls;
- (void)documentPickerWasCancelled:(id)cancelled;
- (id)init;

@end

#endif /* _TtC13ChatUtilities12FileExporter_h */
