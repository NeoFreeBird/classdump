//
#ifndef UIDocumentPickerDelegate_Protocol_h
#define UIDocumentPickerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIDocumentPickerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)documentPicker:(id)picker didPickDocumentsAtURLs:(id)urls;
- (void)documentPicker:(id)picker didPickDocumentsAtURLs:(id)urls;
- (void)documentPickerWasCancelled:(id)cancelled;
- (void)documentPicker:(id)picker didPickDocumentAtURL:(id)url;
- (void)documentPicker:(id)picker didPickDocumentAtURL:(id)url;

@end

#endif /* UIDocumentPickerDelegate_Protocol_h */
