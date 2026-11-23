//
#ifndef QLPreviewControllerDataSource_Protocol_h
#define QLPreviewControllerDataSource_Protocol_h
@import Foundation;

@protocol QLPreviewControllerDataSource

@required

/* required instance methods */
- (long long)numberOfPreviewItemsInPreviewController:(id)controller;
- (long long)numberOfPreviewItemsInPreviewController:(id)controller;
- (id)previewController:(id)controller previewItemAtIndex:(long long)index;
- (id)previewController:(id)controller previewItemAtIndex:(long long)index;

@optional

@end

#endif /* QLPreviewControllerDataSource_Protocol_h */
