//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
